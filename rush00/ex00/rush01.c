/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:24:37 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/10/24 17:49:38 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(int x, char lcorner, char body, char rcorner);

void	rush(int x, int y)
{
	char	chars[4];
	int		i;

	chars[0] = '\\';
	chars[1] = '*';
	chars[2] = '/';
	chars[3] = ' ';
	i = 0;
	if (!(x < 0 || y < 0))
	{
		print_line(x, chars[0], chars[1], chars[2]);
		while (i < y - 2)
		{
			print_line(x, chars[1], chars[3], chars[1]);
			i++;
		}
		if (y != 1)
		{
			print_line(x, chars[2], chars[1], chars[0]);
		}
	}
	else
		write(1, "!Error!\nPlease enter a valid positive int\n", 42);
}

void	print_line(int x, char lcorner, char body, char rcorner)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(rcorner);
		else if (i + 1 < x)
			ft_putchar(body);
		else if (i == x - 1)
			ft_putchar(lcorner);
		i++;
	}
	ft_putchar('\n');
}
