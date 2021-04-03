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

char* howmuch(int m, int n)
{
    int f, b, c, t;
    char* str;

    if (m > n)
    {
        t = m;
        m = n;
        n = t;
    }
    b = 1;
    c = 1;
    t = 0;
    f = m;
    str = malloc(sizeof(char) * 500);
    sprintf(str + ft_strlen(str), "[");
    while (f <= n)
    {
        while (f > 9 * c + 1)
        {
            c++;
        }
        f = 9 * c + 1;
        if (f / b == 7 && f % b == 2)
        {
            sprintf(str + ft_strlen(str), "[M: %i B: %i C: %i]", f, b, c);
            c++;
        }
        else if (7 * b + 2 <= f)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    sprintf(str + ft_strlen(str), "]");
    return (str);
}

int main()
{
    printf("%s\n", howmuch(1, 100));
    printf("%s\n", howmuch(0, 200));
    printf("%s\n", howmuch(1000, 1100));
    printf("%s\n", howmuch(10000, 9950));
    return (0);
}
