#include <stddef.h>

int get_average(const int *marks, size_t count)
{
    size_t length = count;
    int sum = 0;
    int i = 0;

    while (count > 0)
    {
        sum += marks[i];
        i++;
        count--;
    }
    return (sum / length);
}