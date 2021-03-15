#include <stdlib.h>

int	is_prime(int nb)
{
	int i = 3;

	if (nb <= 1) return (0);
	if (nb == 2 || nb == 3) return (1);
	if (nb % 2 == 0 || nb % 3 == 0) return (0);
	while ((i * i) <= nb) {
		if ((nb % i) == 0)
			return (0);
			i += 2;
		}
	return (1);
}

int	find_prime(int nb)
{
	if (nb < 0)
		nb = 1;
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		nb++;
	}
}

long long* step(int g, long long m, long long n)
{
    int step;
    long long *arr = (long long *)malloc(sizeof(long long) * 2);
    arr[0] = 0;
    arr[1] = 0;
    while (m < n)
    {
        if (m != find_prime(m))
            m++;
        step = (find_prime(m + g) - find_prime(m));
        if (step != g)
            m++;
        else
        {
            arr[0] = find_prime(m);
            arr[1] = find_prime(m + g);
            break ;
        }
    }
    return (arr);
}
