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

char* longestConsec(char* strarr[], int n, int k)
{
    int i, j;
    int *l;
    char *str;

    i = 0;
    l = malloc(sizeof(int) * k);
    str = malloc(sizeof(char) * 100);
    while (i + k < n)
    {
        while (k > 0)
        {
            j = 0;
            l[j] = ft_strlen(strarr[j]) + ft_strlen(strarr[j + 1]);
            j++;
            k--;
        }
        if (l[j + 1] > l[j])
        {
            str = ft_strcat(strarr[j], strarr[j + 1]);
        }
        i++;
    }
}

int main()
{
    char *str;
    char* a1[] = {"zone", "abigail", "theta", "form", "libe", "zas", "theta", "abigail"};
    str = longestConsec(a1, 8, 2);
    printf("%s\n", str);
    return(0);
}