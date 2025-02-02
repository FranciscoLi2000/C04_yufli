#include <unistd.h>
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
// 在进制字符串中查找字符的值
int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);  // 字符不在进制字符串中
}
int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	sign;
	int	digit;
	int	base_len;

	result = 0;
	sign = 1;
	base_len = check_base(base);
	if (!base_len)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ((digit = get_value(*str, base)) >= 0)
	{
		result = result * base_len + digit;
		str++;
	}
	return (result * sign);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char	*str = "2025";
	char	*base = "0123456789ABCDEF";

	printf("The number %s in the base-%i system is %i(Decimal)\n", str, strlen(base), ft_atoi_base(str, base));
	return (0);
}
