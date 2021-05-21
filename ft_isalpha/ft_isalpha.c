int		ft_isalpha(char *str)
{
	int is_alphabetic;
	int counter;
	int exit_loop;

	exit_loop = 1;
	counter = 0;
	while (str[counter] != '\0' && exit_loop == 1)
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z') ||
		(str[counter] >= 'a' && str[counter] <= 'z'))
		{
			is_alphabetic = 1;
		}
		else
		{
			is_alphabetic = 0;
			exit_loop = 0;
		}
		counter++;
	}
	return (is_alphabetic);
}
