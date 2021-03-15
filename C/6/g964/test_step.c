#include <stdlib.h>
#include <stdio.h>

int	is_prime(int nb);
int	find_prime(int nb);
long long* step(int g, long long m, long long n);

int main()
{
    long long *foo;
    int i;
    foo = step(8,300,400);
    for (i = 0; i <= (sizeof (foo) / sizeof(foo[0])); i++)
    {
        printf("%lli\n",foo[i]);
    }
    free(foo);
    return (0);
}
