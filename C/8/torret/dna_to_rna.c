#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
    char *rna = malloc(sizeof(char) * strlen(dna) + 1);

    int i = 0;
    while (dna[i] != '\0')
    {
        if (dna[i] == 'T')
        {
            rna[i] = 'U';
        }
        else
        {
            rna[i] = dna[i];
        }
        i++;
    }
    if (dna[i] == '\0')
    {
        rna[i] = dna[i];
    }
    return (rna);
}