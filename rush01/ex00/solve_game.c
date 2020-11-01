/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_game.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:52:34 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 16:40:34 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve_game.h"
#define COL_UP		0
#define COL_DOWN	1
#define ROW_LEFT	2
#define ROW_RIGHT	3

int		**init(int **clues)
{
	int **table;
	int	i;
	int	j;

	i = -1;
	table = (int **)malloc(5 * sizeof(int *));
	while (++i < 4)
	{
		j = -1;
		table[i] = (int *)malloc(5 * sizeof(int));
		while (++j < 4)
			table[i][j] = 0;
	}
	fill_all(table, clues);
	return (table);
}

int		check_num(int **table, int row, int col)
{
	int i;

	i = -1;
	while (++i < 4)
		if (table[i][col] == table[row][col] && !(row == i))
			return (0);
	i = -1;
	while (++i < 4)
		if (table[row][i] == table[row][col] && !(col == i))
			return (0);
	return (1);
}

int		check_game(int **table, int **clues)
{
	int row;
	int col;

	row = -1;
	while (++row < 4)
		if (see_row_left(table[row]) != clues[ROW_LEFT][row])
			return (0);
	row = -1;
	while (++row < 4)
		if (see_row_right(table[row]) != clues[ROW_RIGHT][row])
			return (0);
	col = -1;
	while (++col < 4)
		if (see_col_up(table, col) != clues[COL_UP][col])
			return (0);
	col = -1;
	while (++col < 4)
		if (see_col_down(table, col) != clues[COL_DOWN][col])
			return (0);
	return (1);
}

int		solve_rec(int **table, int **clues, int pos)
{
	int num;

	num = 1;
	if (pos >= 16)
		return (check_game(table, clues));
	if (table[pos / 4][pos % 4] != 0)
		return (solve_rec(table, clues, pos + 1));
	while (num < 5)
	{
		table[pos / 4][pos % 4] = num;
		if (check_num(table, pos / 4, pos % 4))
		{
			if (!solve_rec(table, clues, pos + 1))
				table[pos / 4][pos % 4] = 0;
			else
				return (1);
		}
		else
			table[pos / 4][pos % 4] = 0;
		num++;
	}
	return (0);
}

int		solve_game(int **clues)
{
	int **table;
	int i;

	table = init(clues);
	if (solve_rec(table, clues, 0))
		print_table(table);
	else
		print_string("Error\n");
	i = 0;
	free(table);
	free(clues);
	return (1);
}
