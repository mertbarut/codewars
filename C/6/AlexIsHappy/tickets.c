#include <stdlib.h>

int tickets(size_t length, const int people[length])
{
    int i;
    int n_25, n_50, n_100;

    n_25    = 0;
    n_50    = 0;
    n_100   = 0;
    i       = 0;
    while (length > 0)
    {
        if (people[i] / 25 == 1)
        {
            n_25++;
        }
        if (people[i] / 50 == 1)
        {
            n_50++;
            n_25--;
            if (n_25 < 0)
            {
                break ;
            }
        }
        if (people[i] / 100 == 1)
        {
            n_100++;
            if (n_50 > 0)
            {
                n_50--;
                n_25--;
            }
            else
            {
                n_25 = n_25 - 3;
            }
            if (n_25 < 0)
            {
                break ;
            }
        }
        i++;
        length--;
    }
    if (n_25 >= 0 && n_50 >= 0 && n_100 >= 0)
        return (1);
    else
        return (0);
}

#include <stdio.h>

int main()
{
    int queue1[3] = {25, 25, 50};
    int queue2[2] = {25, 100};
    int queue3[5] = {25, 25, 50, 50, 100};

    printf("%d\n%d\n%d\n", tickets(3, queue1), tickets(2, queue2), tickets(5, queue3));
    return (0);
}