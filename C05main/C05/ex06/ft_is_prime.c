#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	checker;

	checker = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
		return (0);
	while (checker != nb)
	{
		if (nb % checker == 0)
			return (0);
		checker = checker + 2;
	}
	return (1);
}
