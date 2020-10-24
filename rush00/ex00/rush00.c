/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 15:00:27 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/10/24 17:49:27 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(int x, char corner, char body);

void	rush(int x, int y)
{
	char	chars[4];
	int		i;

	i = 0;
	chars[0] = 'o';
	chars[1] = '-';
	chars[2] = '|';
	chars[3] = ' ';
	if (!(x < 0 || y < 0))
	{
		print_line(x, chars[0], chars[1]);
		while (i < y - 2)
		{
			print_line(x, chars[2], chars[3]);
			i++;
		}
		if (y != 1)
		{
			print_line(x, chars[0], chars[1]);
		}
	}
	else
	{
		write(1, "!Error!\nPlease enter a valid positive int\n", 42);
	}
}

void	print_line(int x, char corner, char body)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(corner);
		else if (i + 1 < x)
			ft_putchar(body);
		i++;
	}
	ft_putchar('\n');
}
