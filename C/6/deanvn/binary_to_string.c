#include <stdlib.h>
#include <stdio.h>

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

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}

char *binary_to_string(const char *binary)
{
    int binary_size = ft_strlen(binary);
    int i;
    int sum;
    int n_chars;
    int char_counter;

    n_chars = binary_size / 8;
    char *ascii = malloc(sizeof(char) * n_chars + 1);

    i = 0;
    sum = 0;
    char_counter = 0;
    while (i <= binary_size)
    {
        if ((int)binary[i] - 48 == 1)
        {
            sum += ft_recursive_power(2, (7 - (i % 8)));
        }
        if (i % 8 == 0 && i != 0)
        {
            sprintf(ascii + char_counter, "%c", sum);
            char_counter++;
            sum = 0;
        }
        i++;
    }
    return (ascii);
}

int main()
{
    char *str;
    str = binary_to_string("0100100001100101011011000110110001101111");
    printf("%s\n", str);
    free(str);
    return(0);
}
