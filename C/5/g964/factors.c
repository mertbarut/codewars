#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char* factors(int lst)
{
    char* factors;
    int i;
    int p;

    i = 2;
    p = 0;
    factors = malloc(sizeof(char) * 100);
    while (lst > 1)
    {
        while (lst % i == 0)
        {
            sprintf(factors + ft_strlen(factors), "(");
            sprintf(factors + ft_strlen(factors), "%d", i);
            lst /= i;
            while (lst % i == 0)
            {
                p++;
                lst /= i;
            }
            if (p != 0)
            {
                sprintf(factors + ft_strlen(factors), "**%d", p + 1);
                p = 0;
            }
            sprintf(factors + ft_strlen(factors), ")");
        }
        i++;
    }
    return (factors);
}

int main()
{
    char* str;
    str = factors(7775460);
    printf("%s\n", str);
    return (0);
}