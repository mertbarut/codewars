#include <stdbool.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, size_t size)
{
	size_t i;
	size_t j;
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

bool    comp(const int *a, const int *b, size_t n)
{
    ft_sort_int_tab(a, n);
    ft_sort_int_tab(b, n);
	unsigned int length;
    int i;

    i = 0;
	length = n;
	while (a[i] * a[i] == b[i] && length != 0)
	{
        i++;
		length--;
	}
	if (length == 0)
		return (true);
	else
		return (false);
}
