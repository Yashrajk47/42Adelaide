#include "ft_stock_str.h"
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	num;

	if (nb < 0)
	{
		ft_print('-');
		num = -nb;
	}
	else
	{
		num = nb;
	}
	if (num >= 10)
	{
		ft_putnbr(num / 10);
	}
	ft_print((num % 10 + 48));
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	if (par != NULL)
	{
		while (par[i].str != 0)
		{
			ft_putstr(par[i].str);
			write(1, "\n", 1);
			ft_putnbr(par[i].size);
			write(1, "\n", 1);
			ft_putstr(par[i].copy);
			write(1, "\n", 1);
			i++;
		}
	}
}
