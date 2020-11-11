#include "operators.h"
#include "nums.h"

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

int main(int argc, char **argv)
{
	int a;
	int b;
	char op;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_validate_input(b, op))
		{
		ft_putnbr(calculate(a, op, b));
		ft_putstr("\n");
		}
}
