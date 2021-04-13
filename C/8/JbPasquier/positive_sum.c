#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
    int i, sum;
    i = 0;
    sum = 0;
    while (count > 0)
    {
        if (values[i] < 0)
        {
            i++;
            count--;
        }
        else
        {
            sum += values[i];
            i++;
            count--;
        }
    }
    return (sum);
}