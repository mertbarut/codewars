#include <stdio.h>
#include <stdlib.h>

int *squares_before(int n)
{
    int *arr = malloc(sizeof(int) * (n + 1));
    int i = 0;
    while (i <= n)
    {
        arr[i] = i*i;
        i++;
    }
    return (arr);
}

int nbDig(int n, int d)
{
    int i, count;
    int *arr = squares_before(n);

    i = 0;
    count = 0;
    while (n >= 0)
    {
        while (arr[i] != 0)
        {
            if (arr[i] % 10 == d)
            {
                count++;
            }
            arr[i] /= 10; 
        }
        i++;
        n--;
    }
    return (count + (d == 0 ? 1 : 0));
}

int main()
{
    int nbr = 11549;
    int digit = 1;
    int *arr = squares_before(nbr);

    int i = 0;
    while (i <= nbr)
    {
        printf("%d\t", arr[i]);
        i++;
    }
    printf("\n");
    printf("Number of digits: %d\n", nbDig(nbr, digit));
    free(arr);
    return (0);
}