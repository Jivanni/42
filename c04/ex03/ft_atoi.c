/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:16:50 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/30 12:16:52 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strtoi(char *c, unsigned int l)
{
	if (l)
		return (c[l - 1] - '0' + 10 * strtoi(c, l - 1));
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int				sign;
	unsigned int	num;
	unsigned int	numlen;

	sign = 1;
	num = 0;
	numlen = 0;
	while (*str)
	{
		if ((*str >= 9 && *str <= 13) || *str == 32)
			continue;
		else if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
			numlen++;
		else
			break ;
		str++;
	}
	str -= numlen;
	num = strtoi(str, numlen);
	return (sign * num);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char test[] = "  --+-13464a";
	char test2[] = "-13464";

	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test2));
}
*/
