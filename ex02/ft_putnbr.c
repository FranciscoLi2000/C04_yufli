#include <unistd.h>
#include <limits.h>
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}
#include <stdlib.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_putnbr(atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
