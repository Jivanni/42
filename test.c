#include <stdlib.h>
#include <stdio.h>

void	test(int min, int max)
{
	int *ptr = (int*) malloc(max - min);
	int i = 0;
	while(min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	int k = 0;
	while (k <= 6)
	{
		printf("%d, ", ptr[k]);
		k++;
	}

}

int main()
{
	test(-1, 5);
}
