#include <stdio.h>
int		ft_iterative_power(int nb, int power)
{
	int out;

	out = 1;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power != 0)
	{
		out = out * nb;
		power--;
	}
	return (out);
}
int main()
{
	printf("%d", ft_iterative_power(1,0));
}
