#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
		i++;
	}
	if (s2[i])
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}

void	converter(int n, int baseConvert)
{	
	char	hex[256];
	int		quotient;
	int		remainder;
	int		j;

	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	quotient = n;
	j = 0;
	while (quotient != 0)
	{	
		remainder = quotient % baseConvert;
		if (remainder < 10)
			hex[j++] = remainder + 48;
		else
			hex[j++] = remainder + 55;
		quotient = quotient / baseConvert;
	}
	hex[j] = '\0';
	while (j >= 0)
		write(1, &hex[j--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_strcmp(base, "0123456789") == 0)
		converter(nbr, 10);
	else if (ft_strcmp(base, "01") == 0)
		converter(nbr, 2);
	else if (ft_strcmp(base, "0123456789ABCDEF") == 0)
		converter(nbr, 16);
	else if (ft_strcmp(base, "poneyvif") == 0)
		converter(nbr, 8);
}
