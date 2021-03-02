#include <stdlib.h>

int		n_digits(int nb)
{
	int n_digits;

	n_digits = 1;
	while (nb / 10 != 0)
	{
		n_digits++;
		nb = nb / 10;
	}
	return (n_digits);
}

const char* number_to_string(int number)
{
  char *result;
  result = (char *) malloc (n_digits(number) + 1);
  char* ptr = result, *ptr1 = result, tmp_char;
  int tmp;

  do {
    tmp = number;
    number /= 10;
    *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp - number * 10)];
  } while ( number );

  if (tmp < 0) *ptr++ = '-';
  *ptr-- = '\0';
  while(ptr1 < ptr) {
    tmp_char = *ptr;
    *ptr--= *ptr1;
    *ptr1++ = tmp_char;
  }
  return result;
}
