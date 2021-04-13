#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *repeat_str(size_t count, const char *src)
{
    int length = strlen(src);
    int end = count;
    char *str = calloc(sizeof(char) * length * count + 1, sizeof(char));
    while (end > 0)
    {
        strncat(str, src, length);
        end--;
    }
    str[sizeof(char) * length * count] = '\0';
    return (str);
}

int main()
{
    char *str;
    printf("%d\n", strcmp(repeat_str(3, "hello "), "hello hello hello "));
    return (0);
}