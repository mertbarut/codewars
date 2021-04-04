/* Consider an array/list of sheep where some sheep may be missing from their place. 
We need a function that counts the number of sheep present in the array (true means present). */

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

size_t count_sheep(const bool *sheep, size_t count)
{
    int i = 0;
    size_t sheep_count = 0;
    while (count > 0)
    {
        if (sheep[i] == true)
        {
            sheep_count++;
        }
        i++;
        count--;
    }
    return (sheep_count);
}

int main()
{
    const bool sheep[] = {
      true,  true,  true,  false,
      true,  true,  true,  true,
      true,  false, true,  false,
      true,  false, false, true,
      true,  true,  true,  true,
      false, false, true,  true
    };
    printf("%d\n", (int)count_sheep(sheep, sizeof(sheep)/sizeof(sheep[0])));
    return (0);
}