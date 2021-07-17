#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	if (index > 0)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (0);
}
