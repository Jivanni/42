int		rec(int index)
{
	if (index <= 1)
		return (index);
	return (rec(index - 1) + rec(index - 2));
}

int		ft_fibonacci(int index)
{
	if (index >= 0)
		return (rec(index - 1));
	return (-1);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_fibonacci(0));
}

