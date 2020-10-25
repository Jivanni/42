#include <stdio.h>


void ft_rev_int_tab(int *tab, int size);

int main()
{
	int array[7] = {1, 2, 3, 4, 5, 6, 7};
	int *ptr = array;
	
	ft_rev_int_tab(ptr, 7);


	printf("%d,%d,%d,%d,%d,%d,%d\n",array[0],array[1],array[2],array[3],array[4],array[5], array[6]);
}


void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int y;
	
	x = 0;
	y = size - 1;

	while (x < y)
	{	
		int temp;
		temp = *(tab + x);
		*(tab + x) = *(tab + y);
		*(tab + y) = temp;
		x++;
		y--;
	}
}