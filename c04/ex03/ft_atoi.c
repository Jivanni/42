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

int	g_sign = 1;
unsigned int g_num = 0;
unsigned int g_numlen = 0;

int		strtoi(char *c, unsigned int l)
{
	if (l)
		return (c[l - 1] - '0' + 10 * strtoi(c, l - 1));
	else
		return (0);
}

int		ft_atoi(char *str)
{
	g_sign = 1;
	g_num = 0;
	g_numlen = 0;
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		{
			str++;
			continue;
		}
		else if (*str == '-')
			g_sign *= -1;
		else if (*str == '+')
			g_sign *= +1;
		else if (*str >= '0' && *str <= '9')
			g_numlen++;
		else
			break ;
		str++;
	}
	str -= g_numlen;
	g_num = strtoi(str, g_numlen);
	return (g_sign * g_num);
}

/*
#include <stdio.h>

int main()
{
	char test[] = "  --+-13464a";
	char test2[] = "  --+-13464a";

	printf("%d\n", ft_atoi(test));
	printf("%d", ft_atoi(test2));
}
*/

