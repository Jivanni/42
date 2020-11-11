#include <unistd.h>
#include "operators.h"
#define A 1
#define OP 2
#define B 3


void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_atoi(char *str)
{
	long buff;
	int sign = 1;

	buff = 0;

	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32 || *str == '+')
			sign *= 1;
		else if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			buff = buff * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return(sign * (int) buff);
}
int (*ptr[5]) (int x, int y);

int calculate(int a, char op, int b)
{
	ptr[0] = &sum;
	ptr[1] = &sub;
	ptr[2] = &mul;
	ptr[3] = &div;
	ptr[4] = &mod;
	if (op == '+')
		return ptr[0](a,b);
	else if (op == '-')
		return ptr[1](a,b);
	else if (op == '*')
		return ptr[2](a,b);
	else if (op == '/')
		return ptr[3](a,b);
	else if (op == '%')
		return ptr[4](a,b);
	return(0);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	char op;

	printf("argc = %d", argc);
	if (argc != 4)
		return (0);
	op = argv[2][0];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);

	printf("%d", calculate(a, op, b));
}
