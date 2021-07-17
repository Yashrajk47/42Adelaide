#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * ret;
		power--;
	}
	return (nb);
}
