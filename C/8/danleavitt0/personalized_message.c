int		ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

const char* greet(const char *name, const char *owner)
{
    if (ft_strcmp(name, owner) == 0)
        return "Hello boss";
    else
        return "Hello guest";
}
