#include <stddef.h>

void	asort(int *tab, int size)
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

void	dsort(int *tab, int size)
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

void flip(char d, const int *array, size_t n, int *result)
{
    int i = 0;
    int n_array = n;
    while (n_array > 0)
    {
        result[i] = array[i];
        i++;
        n_array--;
    }
    if (d == 'R')
    {
        asort(result, n);
    }
    if (d == 'L')
    {
        dsort(result, n);
    }
}