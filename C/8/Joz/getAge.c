int		skip_blank(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	return (i);
}

int		str_to_int(char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	result = 0;
	i = skip_blank(str);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			if (str[i] == '-' || str[i] == '+')
				if (str[i] == '-')
					sign = sign * -1;
				else
					i++;
			else
				break ;
		else
			result = 10 * result + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int getAge(const char *inputString)
{
    return (str_to_int(inputString));
}