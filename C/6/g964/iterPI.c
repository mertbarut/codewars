#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <stdlib.h>

char* iterPi(double epsilon)
{
    char *str;
    int sign;
    int i;
    double pi_4;
    double abs_dif;

    pi_4 = 0;
    i = 0;
    abs_dif = 1.0;
    sign = 1;
    str = malloc(sizeof(char) * 100);
    while (abs_dif > epsilon)
    {
        if (sign)
        {
            pi_4 += 1.0 / (1.0 + 2.0*i);
            sign = 0;
        }
        else
        {
            pi_4 -= 1.0 / (1.0 + 2.0*i);
            sign = 1;
        }
        if (4 * pi_4 - M_PI > 0)
        {
            abs_dif = 4 * pi_4 - M_PI;
        }
        else
        {
            abs_dif = (-1)*(4 * pi_4 - M_PI);
        }
        i++;
    }
    sprintf(str, "[%d, %.9f]", i, 4*pi_4);
    return (str);
}

int main()
{
    printf("%s\n", iterPi(0.01));
    return(0);
}
