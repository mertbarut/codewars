#include <stdlib.h>
#include <string.h>

char *no_space(const char *str_in)
{
    char *str_out = malloc(sizeof(char) * strlen(str_in) + 1);

    int i = 0, j = 0;
    while (str_in[i] != '\0')
    {
        while (str_in[i] == 32)
        {
            i++;
        }
        str_out[j] = str_in[i];
        i++;
        j++;
    }
    str_out[j] = '\0';
    return (str_out);
}