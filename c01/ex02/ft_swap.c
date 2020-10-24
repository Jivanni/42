/* test
#include <stdio.h>
void ft_swap(int *a, int *b);

int		main(void)
{
int a = 3;
int b = 5;
int *ptra = &a;
int *ptrb = &b;

ft_swap(ptra, ptrb);

printf("%d, %i\n", a,b);

}
*/
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}