#include <stdbool.h>
#include <stdint.h>

bool hero(uint32_t bullets, uint32_t dragons)
{
    if (bullets >= 2 * dragons)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}