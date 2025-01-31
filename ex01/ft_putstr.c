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

	s = "We are Chinese.\n";
	ft_putstr(s);

	return (0);
}
