#include <stdbool.h>
#include <stdlib.h>

typedef unsigned long long ull;

char *bonus_time(ull salary, bool bonus)
{
    if (bonus == true)
    {
        salary *= 10;
    }

    ull money = salary;
    int digits = 0;
    while (money != 0)
    {
        money /= 10;
        digits++;
    }
    money /= 10;
    char* result = malloc(sizeof(char) * digits + 2);
    result[0] = 36;
    result[digits + 1] = '\0';
    while (digits > 0)
    {
        result[digits] = (salary % 10) + 48;
        digits--;
        salary /= 10;
    }
    return (result);
}

#include <stdio.h>

int main()
{
    printf("%s\n", bonus_time(60000, true));
    return (0);
}