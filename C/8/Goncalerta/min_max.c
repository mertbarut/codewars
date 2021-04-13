void	array_dsort(int *tab, int size)
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

int min(int* array, int arrayLength)
{
    array_dsort(array, arrayLength);
    return (array[arrayLength - 1]);
}

int max(int* array, int arrayLength)
{
    array_dsort(array, arrayLength);
    return (array[0]);
}