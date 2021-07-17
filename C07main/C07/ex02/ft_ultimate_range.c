#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	index;
	int	*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	buffer = malloc(diff * sizeof(int));
	if (buffer == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index != diff)
	{
		buffer[index] = min;
		index++;
		min++;
	}
	return (diff);
}
