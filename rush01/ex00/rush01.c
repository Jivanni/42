/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:23:57 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/01 12:24:00 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft_putstring.h"
#include "solve_game.h"
#define COL_UP		0
#define COL_DOWN	1
#define ROW_LEFT	2
#define ROW_RIGHT	3

int		check_input(char *input)
{
	int i;

	i = 0;
	while (input[i])
	{
		if (i % 2 == 0 && !(input[i] <= '4' && input[i] >= '1'))
			return (0);
		if (i % 2 == 1 && !(input[i] == ' '))
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int		**parse_input(int **dest, char *in)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (in[i])
	{
		if (i % 8 == 0)
			dest[++j] = (int *)malloc(5 * sizeof(int));
		if ((i % 8) % 2 == 0)
			dest[j][(i % 8) / 2] = in[i] - '0';
		if (in[i + 1])
			i += 2;
		else
			i++;
	}
	return (dest);
}

int		check_validity(int **clues)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (!(clues[COL_UP][i] + clues[COL_DOWN][i] >= 3 &&
			clues[COL_UP][i] + clues[COL_DOWN][i] <= 5))
			return (0);
		if (!(clues[ROW_LEFT][i] + clues[ROW_RIGHT][i] >= 3 &&
			clues[ROW_LEFT][i] + clues[ROW_RIGHT][i] <= 5))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int **clues;

	clues = (int **)malloc(5 * sizeof(int *));
	if (argc != 2 || !check_input(argv[1]))
	{
		print_string("Error\n");
		return (0);
	}
	parse_input(clues, argv[1]);
	if (!check_validity(clues))
	{
		print_string("Error\n");
		return (0);
	}
	solve_game(clues);
	return (0);
}
