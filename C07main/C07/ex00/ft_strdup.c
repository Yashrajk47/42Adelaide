#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = malloc(i * sizeof(char));
	i = 0;
	if (ptr != NULL)
	{
		while (src[i] != '\0')
		{
			ptr[i] = src[i];
			i++;
		}
	}
	else
	{
		return (NULL);
	}
	ptr[i] = '\0';
	return (ptr);
}
