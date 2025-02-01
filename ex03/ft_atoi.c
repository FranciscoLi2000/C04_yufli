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
int	main()
{
	// 基本使用示例
	char	*str1 = "123";
	int		num1 = ft_atoi(str1);
	printf("转换 \"%s\" 得到：%d\n", str1, num1);
	// 处理带符号的数字
	char	*str2 = "-456";
	int		num2 = ft_atoi(str2);
	printf("转换 \"%s\" 得到：%d\n", str2, num2);
	// 处理带空格的数字
	char	*str3 = "   789";
	int		num3 = ft_atoi(str3);
	printf("转换 \"%s\" 得到：%d\n", str3, num3);
	// 处理非法输入
	char	*str4 = "12abc34";
	int		num4 = ft_atoi(str4);
	printf("转换 \"%s\" 得到：%d（只转换到非数字字符前）\n", str4, num4);

	return (0);
}
