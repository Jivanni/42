#define	COL_UP		0
#define	COL_DOWN	1
#define	ROW_LEFT	2
#define	ROW_RIGHT	3

void	fill_manager_col(int **table, int **clues)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		if (clues[COL_UP][j] == 4)
		{
			i = -1;
			while (++i < 4)
				table[i][j] = i + 1;
		}
		if (clues[COL_DOWN][j] == 4)
		{
			i = 4;
			while (--i >= 0)
				table[i][j] = 4 - i;
		}
		if (clues[COL_UP][j] == 1)
			table[0][j] = 4;
		if (clues[COL_DOWN][j] == 1)
			table[3][j] = 4;
		j++;
	}
}

void	fill_manager_row(int **table, int **clues)
{
	int i;
	int j;

	j = 0;
	while (j < 4)
	{
		if (clues[ROW_LEFT][j] == 4)
		{
			i = -1;
			while (++i < 4)
				table[j][i] = i + 1;
		}
		if (clues[ROW_RIGHT][j] == 4)
		{
			i = 4;
			while (--i >= 0)
				table[j][i] = 4 - i;
		}
		if (clues[ROW_LEFT][j] == 1)
			table[j][0] = 4;
		if (clues[ROW_RIGHT][j] == 1)
			table[j][3] = 4;
		j++;
	}
}

void	fill_three_col(int **table, int **clues)
{
	int i;
	int j;

	i = 1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (table[i][j] == 4 && clues[COL_UP][j] == 2)
				table[0][j] = 3;
		}
	}

	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (++j < 4)
		{
			if (table[i][j] == 4 && clues[COL_DOWN][j] == 2)
				table[3][j] = 3;
		}
	}
}

void	fill_three_row(int **table, int **clues)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (++i < 4)
		while (++j < 2)
			if (table[i][j] == 4 && clues[ROW_LEFT][i] == 2)
				table[i][3] = 3;
	i = -1;
	j = 1;
	while (++i < 4)
		while (++j < 4)
			if (table[i][j] == 4 && clues[ROW_RIGHT][i] == 2)
				table[i][0] = 3;
}

void	fill_all(int **table, int **clues)
{
	fill_manager_col(table, clues);
	fill_manager_row(table, clues);
	fill_three_col(table, clues);
	fill_three_row(table, clues);
}
