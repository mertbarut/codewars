// For c the function should return false if no non consecutive numbers are found
// It should return true if one is found and the pointer arg first set to the value

#include <stdbool.h>

bool firstNonConsecutive (const int arr[], const int length, int *first)
{
    int i = 0;
        while (i + 1 <= length - 1 && arr[i] == arr[i + 1] - 1)
        {
            i++;
        }
        if (i == length - 1)
        {
            return (false);
        }
        else
        {
            *first = arr[i + 1];
            return (true);
        }
}

#include <stdio.h>

int main()
{
    int **p;
    int values[] = {1,2,3,4,6,7,8};
    firstNonConsecutive(values, 7, *p);

    printf("%p: %i\n", *p, **p);
    return (0);
}