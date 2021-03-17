#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

char *encode(const char *string)
{
    int i;
    char *str;

    str = malloc(sizeof(char) * ft_strlen(string) + 1);
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a')
            str[i] = 49;
        else if (string[i] == 'e')
            str[i] = 50;
        else if (string[i] == 'i')
            str[i] = 51;
        else if (string[i] == 'o')
            str[i] = 52;
        else if (string[i] == 'u')
            str[i] = 53;
        else
            str[i] = string[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *decode(const char *string)
{
    int i;
    char *str;

    str = malloc(sizeof(char) * ft_strlen(string) + 1);
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 49)
            str[i] = 'a';
        else if (string[i] == 50)
            str[i] = 'e';
        else if (string[i] == 51)
            str[i] = 'i';
        else if (string[i] == 52)
            str[i] = 'o';
        else if (string[i] == 53)
            str[i] = 'u';
        else
            str[i] = string[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

#include <stdio.h>

int main()
{
    printf("%s\n%s\n", encode("nqzevynascwamviln"), decode("nqz2vyn1scw1mv3ln"));
    return(0);
}