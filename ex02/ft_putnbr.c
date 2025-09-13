#include <unistd.h>

/*
static int	valid_base(char *bs)
{
	int	i;
	int	j;
	int	error;

	if (bs[0] == '\0' || bs[1] == '\0')
		return (0);
	i = 0;
	while (bs[i] && error == 0)
	{
		j = i + 1;
		while (bs[j])
		{
			if (bs[i] == bs[j])
				return (0);
			j++;
		}
		if (bs[i] == '+' || bs[i] == '-' || bs[i] == '*' || bs[i] == '/'
		|| bs[i] == '%' || bs[i] == '=' || bs[i] == ',' || bs[i] == '.'
		|| bs[i] < 33 || bs[i] > 126)
			return (0);
		i++;
	}
	return (i);
}
*/

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		ft_putchar('-');
		ft_putnbr(-(INT_MIN / 10));
		ft_putchar(base[-(INT_MIN % 10)]);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nb);
		return ;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(base[nb % 10]);
}
