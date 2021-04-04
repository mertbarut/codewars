/*Implement a function named generateRange(min, max, step),
which takes three arguments and generates a range of integers from min to max,
with the step. The first integer is the minimum value, 
the second is the maximum of the range and the third is the step. (min < max) */

#include <stdlib.h>
#include <stdio.h>

int *generate_range(int min, int max, int step, size_t *sz)
{
    int i;
    *sz = (((max - min)/step) + 1);
    int *arr = malloc(sizeof(int) * *sz);

    i = 0;
    while (min <= max)
    {
        arr[i] = min;
        min += step; 
        i++;
    }

    return (arr);
}

int main()
{
    size_t *n;
    int *arr = generate_range(2, 1000, 17, n);
    int i = 0;
    while (*n > 0)
    {
        printf("%d\t", arr[i]);
        i++;
        (*n)--;
    }
    printf("\n");
    return (0);
}