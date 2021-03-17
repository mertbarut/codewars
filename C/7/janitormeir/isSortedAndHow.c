#include <stdlib.h>
#include <stdio.h>

int     *ft_arrcpy(int *dest, int *src, int size) 
{
    int i;

    i = 0;
	while (i <= size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strcpy(char *dest, char *src) 
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

void	ft_asort(int *tab, int size)
{
	int i;
	int j;
	int t;

	i = 0;
	while (i < size) 
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}

void	ft_dsort(int *tab, int size)
{
	int i;
	int j;
	int t;

	i = 0;
	while (i < size) 
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
		i++;
	}
}

char* isSortedAndHow(int* array, int arrayLength)
{
    int i;
    int *org_array;
    char *message;
    org_array = (int *) malloc(sizeof(int) * arrayLength);
    ft_arrcpy(org_array, array, arrayLength);
    ft_asort(array, arrayLength);

    i = 0;
    while (i < arrayLength)
    {
        if (org_array[i] == array[i])
            i++;
        else
            break ;
    }
    if (i == arrayLength)
    {
        message = (char *) malloc(sizeof(char) * 15);
        ft_strcpy(message, "yes, ascending");
    }
    else
    {
        ft_dsort(array, arrayLength);
        i = 0;
        while (i < arrayLength)
        {
            if (org_array[i] == array[i])
                i++;
            else
                break ;
        }
        if (i == arrayLength)
        {
            message = (char *) malloc(sizeof(char) * 16);
            ft_strcpy(message, "yes, descending");
        }
        else
        {
            message = (char *) malloc(sizeof(char) * 3);
            ft_strcpy(message, "no");
        }
    }
    return (message);
}

int main()
{
    char *str1;
    char *str2;
    char *str3;
    int array1[] = {1, 2};
    int array2[] = {15, 7, 3, -8};
    int array3[] = {4, 2, 30};
    str1 = isSortedAndHow(array1, 2);
    str2 = isSortedAndHow(array2, 4);
    str3 = isSortedAndHow(array3, 3);
    printf("%s\n%s\n%s\n", str1, str2, str3);
    return(0);
}