#include <stdlib.h>

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

char *dna_strand(const char *dna)
{
    int i;
    char *comp_dna;

    i = 0;
    comp_dna = (char *)malloc(sizeof(char) * ft_strlen(dna) + 1);
    while (dna[i] != '\0')
    {
        if      (dna[i] == 'A')
            comp_dna[i] = 'T';
        else if (dna[i] == 'T')
            comp_dna[i] = 'A';
        else if (dna[i] == 'G')
            comp_dna[i] = 'C';
        else if (dna[i] == 'C')
            comp_dna[i] = 'G';
        else
            i++;
        i++;
    }
    comp_dna[i] = '\0';
    return (comp_dna);
}
