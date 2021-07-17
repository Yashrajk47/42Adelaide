#include "ft.h"

char	*ft_get_mem(void)
{
	char	c;
	char	*nbr;
	int		i;
	int		fd;

	i = 0;
	fd = open(STDIN_FILENO, O_RDONLY);
	while (read(fd, &c, 1) > 0 && c >= '0' && c <= '9')
		i++;
	nbr = malloc(sizeof(char) * (i + 1));
	if (nbr == NULL)
	{
		write(1, "Memory Error!", 13);
		exit (-1);
	}
	close(fd);
	return (nbr);
}

void	ft_get_lines(char *nbr)
{
	char	c;
	int		i;
	int		fd;

	i = 0;
	fd = open(STDIN_FILENO, O_RDONLY);
	while (read(fd, &c, 1) > 0 && c >= '0' && c <= '9')
	{
		nbr[i] = c;
		i++;
	}
	close(fd);
}

void	ft_get_chars(t_mapvar *legend)
{
	int		fd;
	char	c;

	fd = open(STDIN_FILENO, O_RDONLY);
	while (read(fd, &c, 1) > 0 && c >= '0' && c <= '9')
	{
	}
	if (c != '\n')
	{
		legend->empty = c;
		read(fd, &c, 1);
		if (c != '\n')
		{
			legend->obst = c;
			read(fd, &c, 1);
			if (c != '\n')
				legend->full = c;
		}
	}
	close(fd);
	if (c != '\n')
	{
		write (1, "Error with variable definitions!", 32);
		exit (-1);
	}
}

void	ft_generate_stream(t_mapvar *legend)
{
	char	*nbr;

	nbr = ft_get_mem();
	ft_get_lines(nbr);
	legend->lines = ft_atoi(nbr);
	ft_get_chars(legend);
}
