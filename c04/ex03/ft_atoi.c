int		ft_isspace(char *str)
{
	return(*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' ');
}

int		ft_char_isnum(char *str)
{
	return (*str >= '0' && *str <= '9');
}

int		strtoi(char *c, unsigned int l)
{
    if (l)
	{
		return (c[l-1] - '0' + 10 * strtoi(c, l - 1));
	}
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	unsigned int num;
	int numlen;

	num = 0;
	sign = 1;
	numlen = 0;
	while(*str && ft_isspace(str))
	{
		str++;
	}
	while(*str == '-' || *str == '+' )
	{
		switch (*str)
		{
		case '-':
			sign *= -1;
			break;
		case '+':
			sign *= +1;
			break;
		default:
			break;
		}
		str++;
	}
	while(ft_char_isnum(str))
	{
		numlen++;
		str++;
	}
	str -= numlen;
	num = strtoi(str, numlen);

	return (sign * num);
}
#include <stdio.h>

int main()
{
	char test[] = "  --134ab567";

	printf("%d", ft_atoi(test));
}


