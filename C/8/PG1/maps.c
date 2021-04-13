#include <stddef.h>
#include <stdlib.h>

int *maps(const int *arr, size_t size)
{
    int i = 0;
    int *result = malloc(sizeof(int) * size);
    while (size > 0)
    {
        result[i] = 2 * arr[i];
        size--;
        i++;
    }
    return (result);
}