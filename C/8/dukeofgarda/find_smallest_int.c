#include <stddef.h>

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

int find_smallest_int(int *vec, size_t len)
{
    ft_asort(vec, len);
    return (vec[0]);
}