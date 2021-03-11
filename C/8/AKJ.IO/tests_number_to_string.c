#include <stdlib.h>
#include <stdio.h>

const char* number_to_string(int number);

int main(void)
{
    char *str;
    str = number_to_string(-42);
    printf("%s\n", str);
    free(str);
}
