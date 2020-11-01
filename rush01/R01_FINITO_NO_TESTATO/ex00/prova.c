#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define	COL_UP		0
#define	COL_DOWN	1
#define	ROW_LEFT	2
#define	ROW_RIGHT	3

void	print_string(char *str)
{
	while(*str)
		write(1, str++, 1);
}

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
	if(i != 31)
		return (0);
	return (1);
}

char	**parse_input(char **dest, char *in)
{
	int i;
	int j;

	i = 0;
	j = -1;
	while (in[i])
	{
		if (i % 8 == 0)
			dest[++j] = (char *)malloc(5 * sizeof(char));
		if ((i % 8) % 2 == 0)
			dest[j][(i % 8) / 2] = in[i];
		if (in[i + 1])
			i += 2;
		else
			i++;
	}
	return dest;
}

int		check_validity(char **col_row)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if ((col_row[COL_UP][i] == '4' && col_row[COL_DOWN][i] != '1')
			|| (col_row[ROW_LEFT][i] == '4' && col_row[ROW_RIGHT][i] != '1'))
			return (0);
		if ((col_row[COL_UP][i] == '3' && col_row[COL_DOWN][i] >= '3')
			|| (col_row[ROW_LEFT][i] == '3' && col_row[ROW_RIGHT][i] >= '3'))
			return (0);
		if ((col_row[COL_UP][i] == '2' && col_row[COL_DOWN][i] == '4')
			|| (col_row[ROW_LEFT][i] == '2' && col_row[ROW_RIGHT][i] == '4'))
			return (0);
		if ((col_row[COL_UP][i] == '1' && col_row[COL_DOWN][i] == '1')
			|| (col_row[ROW_LEFT][i] == '1' && col_row[ROW_RIGHT][i] == '1'))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char **col_row;

	col_row = (char **)malloc(5 * sizeof(char *));
	col_row[4] = 0;
	if (argc != 2 || !check_input(argv[1]))
	{
		print_string("Error\n");
		return (0);
	}
	parse_input(col_row, argv[1]);
	for (int i = 0; i < 4; i++)
		printf("%s\n",col_row[i]);
	printf("%d\n",check_validity(col_row));
	return (0);
}