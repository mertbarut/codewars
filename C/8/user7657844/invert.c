#include <stddef.h>

void invert(int *values, size_t values_size)
{
    while (values_size > 0)
    {
        values[values_size - 1] = values[values_size - 1] * (-1) ;
        values_size--;
    }
}