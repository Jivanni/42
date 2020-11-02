/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:18:42 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/02 18:18:44 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *ptr)
{
	int len;

	len = 0;
	while (*ptr++)
		len++;
	return (len);
}

int		check_input(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	rec(int nbr, char *base, int baselen)
{
	if (nbr == -2147483648)
	{
		rec(nbr / baselen, base, baselen);
		write(1, &(base[-(nbr % baselen)]), 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		rec(-nbr, base, baselen);
		return ;
	}
	if (nbr > baselen - 1)
		rec(nbr / baselen, base, baselen);
	write(1, &(base[nbr % baselen]), 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	baselen;

	baselen = ft_strlen(base);
	if (baselen > 1 && check_input(base))
		rec(nbr, base, baselen);
}
