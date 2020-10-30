int		ft_strlen(char *str)
{
	int unsigned len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return(len);
}

#include <stdio.h>

int main()
{
	char test[] = "123";
	printf("%d", ft_strlen(test));
}
