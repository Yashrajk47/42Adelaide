#include <unistd.h>
void	ft_rev_params(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write(1, &name[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
