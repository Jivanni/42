#define	COL_UP		0
#define	COL_DOWN	1
#define	ROW_LEFT	2
#define	ROW_RIGHT	3

int		see_row_left(int *game)
{
	int count;
	int i;
	int see;

	count = 0;
	i = 0;
	see = -1;
	while (i < 4)
	{
		if (game[i] > see)
		{
			see = game[i];
			count++;
		}
		i++;
	}
	return (count);
}

int		see_row_right(int *game)
{
	int count;
	int i;
	int see;

	count = 0;
	i = 3;
	see = -1;
	while (i >= 0)
	{
		if (game[i] > see)
		{
			see = game[i];
			count++;
		}
		i--;
	}
	return (count);
}

int		see_col_up(int **game, int col)
{
	int count;
	int i;
	int see;

	count = 0;
	i = 0;
	see = -1;
	while (i < 4)
	{
		if (game[i][col] > see)
		{
			see = game[i][col];
			count++;
		}
		i++;
	}
	return (count);
}

int		see_col_down(int **game, int col)
{
	int count;
	int i;
	int see;

	count = 0;
	i = 3;
	see = -1;
	while (i >= 0)
	{
		if (game[i][col] > see)
		{
			see = game[i][col];
			count++;
		}
		i--;
	}
	return (count);
}