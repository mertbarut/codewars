#include <stddef.h>
#include <stdlib.h>
#include <string.h>

const char* how_much_i_love_you(int nb_petals)
{
    char *phrase = malloc(sizeof(char) * 13);
    if (nb_petals % 6 == 0)
    {
        strcpy(phrase, "not at all");
    }
    if (nb_petals % 6 == 1)
    {
        strcpy(phrase, "I love you");
    }
    if (nb_petals % 6 == 2)
    {
        strcpy(phrase, "a little");
    }
    if (nb_petals % 6 == 3)
    {
        strcpy(phrase, "a lot");
    }
    if (nb_petals % 6 == 4)
    {
        strcpy(phrase, "passionately");
    }
    if (nb_petals % 6 == 5)
    {
        strcpy(phrase, "madly");
    }
    return (phrase);
}