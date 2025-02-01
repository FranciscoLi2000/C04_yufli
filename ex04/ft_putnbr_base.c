#include <unistd.h>
#include <limits.h>
static int	check_base(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}
void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	unsigned int	n;

	base_len = check_base(base);
	if (base_len == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = (unsigned int)-nbr;
	}
	else
		n = (unsigned int)nbr;
	if (n >= (unsigned int)base_len)
	{
		ft_putnbr_base(n / base_len, base);
		ft_putnbr_base(n % base_len, base);
	}
	else
		write(1, &base[n], 1);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*base = "01";
	int	nb = 50;

	ft_putnbr_base(nb, base);
	printf("\n");
	return (0);
}
