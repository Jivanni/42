#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	size_t i;
	size_t size;
	int *arr;

	i = 0;
	if (min >= max)
	{
		*arr = 0;
		return(0);
	}
	size = max - min;
	arr = (int *) malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		*range = 0;
		return(-1);
	}
	*range = arr;
	while(i < size)
		{
			arr[i] = min;
			i++;
			min++;
		}
	return(size);
}

#include <stdio.h>
int main()
{
	int **range;
	ft_ultimate_range(range, 2, 5);
}
