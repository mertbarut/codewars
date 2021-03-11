#include <stdlib.h>

// arr: directions to reduce, sz: size of arr, lg size of returned array
// function result will be freed
char** dirReduc(char** arr, int sz, int* lg)
{
	int i;
	int j;
	int t;
    char **tab;
    
    tab = malloc(sz * sizeof *tab);
    if (tab)
        for (i = 0; i < sz; i++)
            tab[i] = malloc(6 * sizeof *tab[i]);
    i = 0;
	while (i < sz)
	{
		j = i + 1;
		while (j < sz)
		{
			if (!((arr[i] == "NORTH" && arr[j] == "SOUTH") || 
                (arr[i] == "SOUTH" && arr[j] == "NORTH") ||
                (arr[i] == "EAST" && arr[j] == "WEST") || 
                (arr[i] == "WEST" && arr[j] == "EAST")
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
