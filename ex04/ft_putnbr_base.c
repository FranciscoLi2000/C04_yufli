#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = valid_base(base);
	if (base_len == 0)
		return ;
	if (nbr == INT_MIN)
	{
		ft_putchar('-');
		ft_putnbr_base(-(INT_MIN / base_len), base);
		ft_putchar(base[-(INT_MIN % base_len)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
		return ;
	}
	else if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}
