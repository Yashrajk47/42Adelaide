#include <unistd.h>
void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write(1, &name[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		ft_print_program_name(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
