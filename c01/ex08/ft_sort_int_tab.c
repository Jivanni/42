/*
#include <stdio.h>


void    ft_sort_int_tab(int *tab, int size);

int main()
{
	int array[7] = {1, 6, 3, 5, 2, 4, 7};
	int *ptr = array;
	
	ft_sort_int_tab(ptr, 7);


	printf("%d,%d,%d,%d,%d,%d,%d\n",array[0],array[1],array[2],array[3],array[4],array[5], array[6]);
}
*/

void    ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
    int k;
	

    i = 0;
	while(i < size)
        {
            j = i + 1;
            while(j < size)
            {
 
                if (tab[i] > tab[j]) 
                {
 
                    k =  tab[i];
                    tab[i] = tab[j];
                    tab[j] = k;
 
                }
            ++j;
            }
        ++i;
        }
}