#include <stdlib.h>
#include <stdio.h>

int		*test(int min, int max)
{
	int *ptr = (int*) malloc(max - min);
	int i = 0;
	while(min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}

int main()
{

		int *array[4];
		array = test(1, 5);
		printf("%d", array);


}
