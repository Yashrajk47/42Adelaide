#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	ptr = malloc((i + 1) * sizeof(char));
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					i;

	i = 0;
	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	while (ac > i)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
