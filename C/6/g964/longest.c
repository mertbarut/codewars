#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int dest_len;
	unsigned int i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

void	ft_sort_str(char *str)
{
	size_t i;
	size_t j;
	char t;

	i = 0;
	while (i < ft_strlen(str)) 
	{
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] > str[j])
			{
				t = str[i];
				str[i] = str[j];
				str[j] = t;
			}
			j++;
		}
		i++;
	}
}

char *longest(char *s1, char *s2)
{
	int i;
    int j;
    char *a;

    i = 0;
    j = 0;
    
    a = ft_strcat(s1, s2);
    ft_sort_str(a);
	while (a[i] != '\0')
    {
		if (a[i] != a[j])
            a[++j] = a[i];
        i++;
    }
	return j + 1;
}

int main()
{
    char *a;
    char *b;

    a = "xyaabbbccccdefww";
    b = "xxxxyyyyabklmopq";
    
    printf("%s\n", longest(a, b));
    return (0);
}
