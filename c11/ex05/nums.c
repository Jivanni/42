#include "nums.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_atoi(char *str)
{
	long buff;
	int sign = 1;

	buff = 0;

	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32 || *str == '+')
			sign *= 1;
		else if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			buff = buff * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return(sign * (int) buff);
}


void	ft_putnbr(int nb)
{
	char temp[1];

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		temp[0] = (48 + nb % 10);
		write(1, temp, 1);
	}
}

int	ft_validate_input(int b, char operator)
{
	if (operator == '/' && b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (operator == '%' && b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}
