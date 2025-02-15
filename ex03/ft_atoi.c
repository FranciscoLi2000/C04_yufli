#include <unistd.h>
int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
#include <stdio.h>
int	main(int argc, char **argv)
{
/*	char	*str1 = "123";
	int		num1 = ft_atoi(str1);
	printf("转换 \"%s\" 得到：%d\n", str1, num1);

	char	*str2 = "-456";
	int		num2 = ft_atoi(str2);
	printf("转换 \"%s\" 得到：%d\n", str2, num2);

	char	*str3 = "   789";
	int		num3 = ft_atoi(str3);
	printf("转换 \"%s\" 得到：%d\n", str3, num3);

	char	*str4 = "12abc34";
	int		num4 = ft_atoi(str4);
	printf("转换 \"%s\" 得到：%d（只转换到非数字字符前）\n", str4, num4); */

	if (argc == 2)
		printf("The output number is %i.\n", ft_atoi(argv[1]));
	return (0);
}
