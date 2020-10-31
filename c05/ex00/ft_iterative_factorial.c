#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	int res = 1;
	int i = 2;
	while(i <= nb)
	{
		res *= i++;
	}
	return(res);
}
int main()
{
	printf("%d", ft_iterative_factorial(6));
}
