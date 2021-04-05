#include <stdlib.h>
#include <stdio.h>

unsigned short *reverse_seq(unsigned short num)
{
    if (num == 0)
    {
        return (NULL);
    }

    unsigned short *arr = malloc(sizeof(unsigned short) * num);

    int i;
    i = 0;
    while (num > 0)
    {
        arr[i] = num;
        num--;
        i++;
    }
    return (arr);
}

int main()
{
    unsigned short n = 5;
    unsigned short *arr = reverse_seq(n);
    int i = 0;
    while (n > 0)
    {
        printf("%d\t", arr[i]);
        i++;
        n--;
    }
    printf("\n");
    return (0);
}