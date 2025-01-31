#include <unistd.h>
int	ft_strlen(char *str)
{
	char	*s;

	s = str;
	if (!str)
		return (0);
	while (*str != '\0')
		str++;
	return (str - s);
}
#include <stdio.h>
int	main()
{
	char	*s = "Hola, Mundo.";

	printf("%i\n", ft_strlen(s));
	return (0);
}
