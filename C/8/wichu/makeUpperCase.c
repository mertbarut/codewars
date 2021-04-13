char *makeUpperCase (char *string)
{
	int i = 0;
	while (string[i] != '\0')
	{
		if (string[i] > 96 && string[i] < 123)
		{
			string[i] -= 32; 			
		}
		i++;
	}
	return (string);
}
