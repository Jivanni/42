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

int		strtoi(char *c)
{
	if (*c)
		return (c++ - '0' + 10 * strtoi(c));
	else
		return (0);
}

int (*ptr[5]) (int x, int y);

int calculate(int a, int b, char op)
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
}

#include <stdio.h>

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	printf("&d", calculate(argv[A], argv[OP], argv[B]));

}
