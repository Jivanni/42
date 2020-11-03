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

int		ft_find_next_prime(int nb)
{
	while(1)
		if(ft_is_prime(nb))
			return (nb);
		else
			nb++;
}


#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(24));
}
