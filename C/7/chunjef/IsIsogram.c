#include <stdbool.h>
#include <stdio.h>

bool IsIsogram(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		while (str[j] != '\0')
		{
			if (str[j] == str[i] || str[j] - 32 == str[i] || str[j]  == str[i] - 32)
				return (false);
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (true);
}

int main(void)
{
	printf("%d\n", IsIsogram("Dermatoglyphics"));
	printf("%d\n", IsIsogram("aba"));
	printf("%d\n", IsIsogram("moOse"));
	return (0);
}