#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	diff;
	int	*ret;
	int	i;

	diff = max - min;
	i = 0;
	if (diff == 0 || diff < 0)
		return (NULL);
	ret = (int *)malloc(diff * sizeof(int));
	while (i != diff)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
