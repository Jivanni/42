#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *out;
	size_t i;
	size_t size;

	i = 0;
	if (min >= max)
	{
		return(NULL);
	}
	size = max - min;
	if ((out = (int *) malloc(sizeof(int) * size)))
	{
		while(i < size)
		{
			out[i] = min;
			i++;
			min++;
		}
	}
	return(out);
}

#include <stdio.h>
int main()
{

	printf("%d", ft_range(2, 5)[0]);

}
// 5 0    -3 ,5  5,  -2
