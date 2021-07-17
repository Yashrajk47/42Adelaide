#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				ret;
	unsigned int	i;

	i = 0;
	ret = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			ret = s1[i] - s2[i];
			return (ret);
		}
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (ret);
}
