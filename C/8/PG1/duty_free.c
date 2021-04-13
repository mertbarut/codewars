#include <stdio.h>

int duty_free(int price, int discount, int holiday_cost) 
{
    double profit = (double)price * (double)discount / 100.0;
    return((int)((double)holiday_cost / profit));
}

int main()
{
    printf("%d\n", duty_free(10, 10, 500));
    printf("%d\n", duty_free(12, 50, 1000));
    printf("%d\n", duty_free(17, 10, 500));
    return(0);
}