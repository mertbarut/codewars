#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
    int i = 0;
    int sum_negative = 0, count_positive = 0;
    while (count > 0)
    {
        if (values[i] > 0)
        {
            count_positive++;
        }
        if (values[i] < 0)
        {
            sum_negative += values[i];
        }
        i++;
        count--;
    }
    *positivesCount = count_positive;
    *negativesSum = sum_negative;
}