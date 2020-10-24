
#include <stdio.h>
/*
void ft_div_mod(int a, int b, int *div, int *mod);
 
int		main(void)
{
int a = 7;
int b = 5;
int div;
int mod;

int *_div = &div;
int *_mod = &mod;

ft_div_mod(7, 5, _div, _mod);

printf("%d, %d, %d, %d\n", a,b,div,mod);

}
*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}