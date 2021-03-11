#include <stdbool.h>

int	ft_strlen(const char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

bool isValidWalk(const char *walk)
{
    int x;
    int y;
    int i;

    x = 0;
    y = 0;
    i = 0;
    if (ft_strlen(walk) != 10)
        return (false);
    while (walk[i] != '\0')
    {
        if (walk[i] == 'w')
            x--;
        else if (walk[i] == 'e')
            x++;
        else if (walk[i] == 'n')
            y++;
        else
            y--;
        i++;
    }
    if (x == 0 && y == 0)
        return (true);
}