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
