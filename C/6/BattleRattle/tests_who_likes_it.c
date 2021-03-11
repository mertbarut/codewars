
#include <stddef.h>
#include <stdio.h>

char* likes(size_t n, const char *const names[n]);

int main(void)
{
  const char *const names[6] = {"Alex", "Jacob", "Mark", "Max", "Anne", "Mert"};
  printf("%s\n", likes(6, names));
}
