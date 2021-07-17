#include <stdio.h>
int	ft_sqrt(int nb)
{
	double	checker;
	double	divisor;
	int		ret;

	divisor = 2;
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while ((divisor / 2) != 50000)
	{
		checker = nb / divisor;
		if (divisor == checker)
		{
			ret = divisor;
			return (ret);
		}
		divisor++;
	}
	return (0);
}
