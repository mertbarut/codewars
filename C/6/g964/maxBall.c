#include <stdio.h>

int maxBall(int v0)
{
    double v;
    double h1, h2;
    int t;
    double g = 0.0981; 
    t = 1;
    h1 = 0;
    h2 = 0;
    v = (((double)v0)/(36)); /* speed in m/ms */
    while (1)
    {
        h1 = v*t - 0.5*g*t*t;
        h2 = v*(t + 1) - 0.5*g*(t + 1)*(t + 1); 
        if (h2 < h1)
            break ;
        t++; 
    }
    return ((int)t);
}

int main()
{
    int t;
    t = maxBall(15);
    printf("%d\n", t);
    return (0);
}