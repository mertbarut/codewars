#include <stdlib.h>
#include <stdio.h>

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

int solve(const char *str_in)
{
    int* sums;
    int i;
    int j;

    i = 0;
    j = 0;
    sums = calloc(ft_strlen(str_in), sizeof(int));
    while (str_in[i] != '\0')
    {
        if (str_in[i] != 'a' && str_in[i] != 'e' && str_in[i] != 'i' && str_in[i] != 'o' && str_in[i] != 'u')
        {
            sums[j] += (int)(str_in[i] - 96);
        }
        else
        {
            j++;
        }
        i++;
    }
    ft_dsort(sums, (j + 1));
    return(sums[0]);
}

int main()
{
    int x1, x2;

    x1 = solve("zozz");
    x2 = solve("chruschtschov");
    printf("%i\n%i\n", x1, x2);
    return(0);
}