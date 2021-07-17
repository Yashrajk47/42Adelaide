#include "ft.h"

int	ft_check_inputs(int argc, char *argv, char c)
{
	int	fd;

	if (argc > 0)
	{
		fd = open(argv, O_RDONLY);
		if (fd != -1)
			return (1);
	}
	else if (read(STDIN_FILENO, &c, 1) > 0)
	{
		close(0);
		return (0);
	}
	return (-1);
}

void	ft_read_inputs(int argc, char **argv)
{
	int			fd;
	char		c;
	int			i;
	t_mapvar	legend;

	i = 0;
	fd = ft_check_inputs(argc, **argv, &c);
	if (fd == -1)
	{
		write(1, "Error!", 6);
		exit (-1);
	}
	else if (fd == 0)
		ft_generate_stream(&legend);
	else
	{
		while (i < argc)
		{
			ft_generate_maps(&legend, argv[i]);
			i++;
		}	
	}
}
