#include <stdbool.h>
#include <stdio.h>

bool IsIsogram(char *str);

int main(void)
{
	printf("%d\n", IsIsogram("Dermatoglyphics"));
	printf("%d\n", IsIsogram("aba"));
	printf("%d\n", IsIsogram("moOse"));
	return (0);
}