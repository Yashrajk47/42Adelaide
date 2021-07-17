#include <unistd.h>
void	ft_print_params(char *name)
{
	int	m;

	m = 0;
	while (name[m] != '\0')
	{
		write(1, &name[m], 1);
		m++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	l;
	int	ret;

	l = 0;
	ret = 0;
	while (s1[l])
	{
		if (s1[l] != s2[l])
		{
			ret = s1[l] - s2[l];
			return (ret);
		}
		l++;
	}
	if (s2[l])
	{
		ret = s1[l] - s2[l];
	}
	return (ret);
}

void	ft_sortstr(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < argc && argv[i])
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_strcmp(argv[i], argv[j]) < 0))
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	k;

	k = 0;
	ft_sortstr(argc, argv);
	while ((argc - 1) > k)
	{
		ft_print_params(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
