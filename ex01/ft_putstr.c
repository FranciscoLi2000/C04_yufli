#include <unistd.h>
void	ft_putstr(char *str)
{
	char	*s;

	s = str;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
int	main()
{
	char	*s;

	s = "We are Chinese.";
	ft_putstr(s);
	write(1, "\n", 1);
	return (0);
}
