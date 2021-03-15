#include <stdlib.h>
#include <stdio.h>

int find_deleted_number(const int arr[], size_t arr_sz, const int mix_arr[], size_t mix_sz)
{
    int sum_org_arr;
    int sum_mix_arr;
    int i;

    sum_org_arr = 0;
    sum_mix_arr = 0;
    i = 0;
    while (arr_sz > 0)
    {
        sum_org_arr += + arr[i];
        arr_sz--;
        i++;
    }
    i = 0;
    while (mix_sz > 0)
    {
        sum_mix_arr += + mix_arr[i];
        mix_sz--;
        i++;
    }
    return (sum_org_arr - sum_mix_arr);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int mixedArr[] = {3,4,1,5};
    int missing;
    missing = find_deleted_number(arr, 5, mixedArr, 4);
    printf("%d\n", missing);
    return (0);
}