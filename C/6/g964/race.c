/* v1: A's speed */
/* v2: B's speed */
/* g:  lead of A over B */
/* t:  time needed for B to catch up to A */

#include <stdlib.h>

int* race(int v1, int v2, int g)
{
    int t;
    int i;
    int *arr = (int *)malloc(sizeof(int) * 3);

    if (v1 >= v2)
    {
        i = 0;
        while (i < 3)
        {
            arr[i] = -1;
            i++;
        }
        return (arr);
    }
    t = 0;
    while ((g + (((double)v1)/1)*t) >= (((double)v2)/1)*t)
    {
        arr[0] = t;
        t++;
    }
    t = 0;
    while ((g + (((double)v1)/60)*t) >= (((double)v2)/60)*t)
    {
        arr[1] = t - arr[0]*60;
        t++;
    }
    t = 0;
    while ((g + (((double)v1)/3600)*t) >= (((double)v2)/3600)*t)
    {
        arr[2] = t - arr[1]*60 - arr[0]*3600;
        t++;
    }
    return (arr);
}
