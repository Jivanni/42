#include <stdio.h>

/* test
void ft_ultimate_div_mod(int *a, int *b);
 
int		main(void)
{
int a = 7;
int b = 5;
int *_a = &a;
int *_b = &b;

ft_ultimate_div_mod(_a, _b);

printf("%d, %d\n", a,b);

}
*/
void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}