#include <stdio.h>

char *dna_strand(const char *dna);

int main()
{
    char *result;
    result = dna_strand("GTATCGATCGATCGATCGATTATATTTTCGACGAGATTTAAATATATATATATACGAGAGAATACAGATAGACAGATTA");
    printf("%s\n", result);
    return (0); 
}
