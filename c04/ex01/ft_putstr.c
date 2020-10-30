#include <unistd.h>
void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
#include <stdio.h>

int main()
{
	char test[] = "1";
	ft_putstr(test);
}
