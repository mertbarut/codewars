#include <stdbool.h>

bool is_square(int n)
{
/* n^2 = sum of first n odd numbers */
int i;
int sum;
int j; // 'i'th odd number

i = 1;
sum = 0;
if (n == 0)
    return (true);
while (i <= n)
    {
        j = 2 * i - 1;
        sum = sum + j;
        i++;
        if (sum == n)
            return (true);
        else if (sum > n)
            return (false);
        else
            continue ;
    }
}
