#include <stdio.h>
 int ft_iterative_power(int nb, int power)
{
	int i = 2;
	while(i < power)
	{
		nb *= nb;
		i++;
	}
	return(nb);
}
int main()
{
	printf("%d", ft_iterative_power(6,2));
}
