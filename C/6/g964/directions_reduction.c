#include <stdlib.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int length;

	length = n;
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2 && length != 0)
	{
		s1++;
		s2++;
		length--;
	}
	if (*s1 == *s2 || length == 0)
		return (0);
	else
		return (*s1 - *s2);
}

// arr: directions to reduce, sz: size of arr, lg: size of returned array
// function result will be freed
char** dirReduc(char** arr, int sz, int* lg)
{
	int i;
	int j;
    char **tab;
    
    tab = malloc(sz * sizeof (*tab));
    if (tab)
        for (i = 0; i < sz; i++)
            tab[i] = malloc(6 * sizeof *tab[i]);
    i = 0;
	while (i < sz)
	{
		j = i + 1;
		while (j < sz)
		{
			if (!((ft_strncmp(arr[i], "NORTH", 5) && ft_strncmp(arr[j], "SOUTH", 5)) || 
                (ft_strncmp(arr[i], "SOUTH", 5) && ft_strncmp(arr[j], "NORTH", 5)) ||
                (ft_strncmp(arr[i], "WEST", 5) && ft_strncmp(arr[j], "EAST", 5)) || 
                (ft_strncmp(arr[i], "EAST", 5) && ft_strncmp(arr[j], "WEST", 5))
                ))
			{
				tab[i] = arr[i];
				tab[j] = arr[j];
			}
			j++;
		}
		i++;
	}
    return (tab);
}

int main()
{
    char **result;   
    char* d1[7] = {"NORTH", "SOUTH", "SOUTH", "EAST", "WEST", "NORTH", "WEST"};
    result = dirReduc(d1, 7, 1);
}