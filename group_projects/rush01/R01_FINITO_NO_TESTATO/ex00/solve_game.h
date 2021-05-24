#include "fill_manager.h"
#include "check_view.h"

#define	COL_UP		0
#define	COL_DOWN	1
#define	ROW_LEFT	2
#define	ROW_RIGHT	3

int		**init(int **clues)
{
	int **table;

	table = (int **)malloc(5*sizeof(int *));
	for(int i = 0; i<4; i++)
	{
		table[i] = (int *)malloc(5*sizeof(int));
		for(int j=0; j < 4; j++)
			table[i][j] = 0;
	}
	fill_all(table, clues);
	return (table);
}
#include <stdio.h>
void	print(int **table, int **clues)
{
	for(int i = 0; i<4; i++)
	{
	    for(int j=0; j < 4; j++)
	        printf("%d ",table[i][j]);
	    printf("\n");
	}
	printf("\n");
	for(int i = 0; i<4; i++)
  	{
    	for(int j=0; j < 4; j++)
        	printf("%d ",clues[i][j]);
    	printf("\n");
  	}
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
	if (pos == 16)
		return check_game(table, clues);
	if (table[pos / 4][pos % 4] != 0)
		return solve_rec(table, clues, pos + 1);
	while (num < 5)
	{
		table[pos / 4][pos % 4] = num;
		if (check_num(table, pos / 4, pos % 4))
		{
			if (!solve_rec(table, clues, pos + 1))
			{
				table[pos / 4][pos % 4] = 0;
			}
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

	table = init(clues);
	solve_rec(table, clues, 0);
	print(table,clues);
  	return (1);
}