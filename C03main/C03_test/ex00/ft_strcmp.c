#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
		i++;
	}
	if (s2[i])
	{
		ret = s1[i] - s2[i];
	}
	return (ret);
}
