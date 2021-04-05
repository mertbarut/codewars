#include <string.h>

int correct_tail(const char *body, const char *tail)
{
    int length = strlen(body);
    if (body[length - 1] == tail[0])
    {
        return (1);
    }
    return (0);
}