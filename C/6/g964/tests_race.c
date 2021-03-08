/* v1: A's speed */
/* v2: B's speed */
/* g:  lead of A over B */
/* t:  time needed for B to catch up to A */

#include <stdio.h>
#include <stdlib.h>

int* race(int v1, int v2, int g);

int main()
{
    int *foo;
    int i;
    foo = race(1, 5, 1000000);
    for (i = 0; i <= (sizeof (foo) / sizeof(foo[0])); i++)
    {
        printf("%i\n",foo[i]);
    }
    free(foo);
}
