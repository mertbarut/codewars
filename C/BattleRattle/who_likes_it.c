#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char* itoa(int value, char* result, int base) {
  // check that the base if valid
  if (base < 2 || base > 36) { *result = '\0'; return result; }

  char* ptr = result, *ptr1 = result, tmp_char;
  int tmp_value;

  do {
    tmp_value = value;
    value /= base;
    *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
  } while ( value );

  // Apply negative sign
  if (tmp_value < 0) *ptr++ = '-';
  *ptr-- = '\0';
  while(ptr1 < ptr) {
    tmp_char = *ptr;
    *ptr--= *ptr1;
    *ptr1++ = tmp_char;
  }
  return result;
}

char* likes(size_t n, const char *const names[n])
{
  char *display;
  char *buffer;

  if (n == 0)
  {
    display = (char *)malloc(sizeof(char) * 18);
    strcpy(display, "no one likes this");
  }
  else if (n == 1)
  {
    display = (char *)malloc(sizeof(char) * strlen(names[0]) + 12);
    strcpy(display, names[0]);
    strcat(display, " likes this");
  }
  else if (n == 2)
  {
    display = (char *)malloc(sizeof(char) * strlen(names[0]) + sizeof(char) * strlen(names[1]) + 11);
    strcpy(display, names[0]);
    strcat(display, " and ");
    strcat(display, names[1]);
    strcat(display, " like this");
  }
  else if (n == 3)
  {
    display = (char *)malloc(sizeof(char) * strlen(names[0]) + sizeof(char) * strlen(names[1]) + sizeof(char) * strlen(names[2]) + 18);
    strcpy(display, names[0]);
    strcat(display, ", ");
    strcat(display, names[1]);
    strcat(display, " and ");
    strcat(display, names[2]);
    strcat(display, " like this");
  }
  else
  {
    display = (char *)malloc(sizeof(char) * strlen(names[0]) + sizeof(char) * strlen(names[1]) + sizeof(char) * strlen(names[2]) + 18);
    strcpy(display, names[0]);
    strcat(display, ", ");
    strcat(display, names[1]);
    strcat(display, " and ");
    buffer = (char *)malloc(10);
    strcat(display, itoa(n - 2, buffer, 10));
    strcat(display, " others like this");
  }
  return (display);
}
