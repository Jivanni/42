int		ft_sqrt(int nb)
{
	if (nb <= 1)
			return (nb);
	return (ft_sqrt(nb - 1) * ft_sqrt(nb - 1));
}


#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(9));
}
