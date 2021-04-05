#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char **fix_the_meerkat(char **arr)
{
    char *tmp = malloc(sizeof(char) * 5);
    tmp = arr[0];
    arr[0] = arr[2];
    arr[2] = tmp;
    return (arr);
}

int main()
{
    char *arr[] = { "tail", "body", "head" };
    char **result = fix_the_meerkat(arr);

    int i = 0;
    while (i < 3)
    {
        printf("%s\t", result[i]);
        i++;
    }
    printf("\n");
    return (0);
}