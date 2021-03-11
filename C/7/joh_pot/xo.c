#include <stdbool.h>

bool xo (const char* str)
{
    int n_x;
    int n_o;
    int i;

    n_o = 0;
    n_x = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'x' || str[i] == 'X')
            n_x++;
        if (str[i] == 'o' || str[i] == 'O')
            n_o++;
        i++;
    }
    if (n_o == n_x)
        return (true);
    else
        return (false);
}

int main()
{

}