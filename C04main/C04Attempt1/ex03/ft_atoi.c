int	logic(char strnum[], int countminus, int i)
{
	int	powermulti;
	int	num;
	int	finalnum;

	finalnum = 0;
	powermulti = 1;
	while (i != 0)
	{
		num = strnum[--i] - '0';
		num = num * powermulti;
		powermulti = powermulti * 10;
		finalnum = finalnum + num;
	}
	if (countminus % 2 == 1)
		finalnum = -finalnum;
	return (finalnum);
}

int	ft_atoi(char *str)
{
	char	strnum[12];
	int		counter;
	int		countminus;
	int		i;

	i = 0;
	counter = 0;
	countminus = 0;
	while (str[counter] == ' ')
		counter++;
	while (!(str[counter] > 47 && str[counter] < 58))
	{
		if (str[counter] == '-')
			countminus++;
		else if (str[counter] == '+')
			;
		else
			return (0);
		counter++;
	}
	while ((str[counter] > 47 && str[counter] < 58) && str[counter] != '\0')
		strnum[i++] = str[counter++];
	return (logic(strnum, countminus, i));
}
