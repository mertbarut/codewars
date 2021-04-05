#include <stdlib.h>
#include <string.h>

char *apple(int x)
{
    char *str = malloc(sizeof(char) * 100);
    if (x * x < 1000)
    {
        strcpy(str, "Help yourself to a honeycomb Yorkie for the glovebox.");
    }
    else
    {
        strcpy(str, "It's hotter than the sun!!");
    }
    return (str);
}