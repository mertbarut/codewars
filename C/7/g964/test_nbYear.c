#include <stdio.h>

int nbYear(int p0, double percent, int aug, int p);

int main()
{
    int years;
    years = nbYear(1500000, 2.5, 10000, 2000000);
    printf("%d\n", years);
    return(0);
}