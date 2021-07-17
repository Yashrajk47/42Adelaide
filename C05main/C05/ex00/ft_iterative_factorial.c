int	ft_iterative_factorial(int nb)
{
	int	ret;

	ret = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ret = nb * ret;
		nb--;
	}
	return (ret);
}
