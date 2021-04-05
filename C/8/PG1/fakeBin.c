#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fakeBin(const char *digits, char *buffer)
{
    int i = 0;
    while (digits[i] != '\0')
    {
        if (digits[i] >= 48 && digits[i] <= 57)
        {
            if (digits[i] < 53)
            {
                buffer[i] = 48;
            }
            else
            {
                buffer[i] = 49;
            }
        }
        i++;
    }
    if (digits[i] == '\0')
    {
        buffer[i] = '\0';
    }
}

int main()
{
    const char *digits = "45385593107843568";
    char *buffer = (char*)malloc(sizeof(char) * (1 + strlen(digits)));
    fakeBin(digits, buffer);
    printf("%s\n", buffer);
    free(buffer);
    return (0);
}