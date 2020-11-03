int		ft_is_prime(int nb)
{
	int i;
	i = nb;
	while(i > 2)
		{
		if (nb % i - 1 == 0)
			return (0);
		i--;
		}
	return (1);
}


#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(5));
}
