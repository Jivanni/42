int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while(i < nb)
		{
		if (nb % i == 0)
			return (0);
		i++;
		}
	return (nb > 1);
}


#include <stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(4));
}
