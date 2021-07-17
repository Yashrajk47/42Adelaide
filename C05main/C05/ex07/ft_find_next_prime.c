#include <stdio.h>
int	ft_find_next_prime(int nb)
{
	int	checker;

	checker = 3;
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		return (ft_find_next_prime(nb + 1));
	while (checker != nb)
	{
		if (nb % checker == 0)
			return (ft_find_next_prime(nb + 1));
		checker = checker + 2;
	}
	return (nb);
}
int main()
{	
	printf("%d\n", ft_find_next_prime(16574));
}
