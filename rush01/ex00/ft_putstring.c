/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:25:51 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 16:39:30 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstring.h"

void	print_string(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	print_number(int nbr)
{
	put_char(nbr + '0');
}

void	print_table(int **table)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			print_number(table[i][j]);
			if (j != 3)
				put_char(' ');
		}
		put_char('\n');
	}
}
