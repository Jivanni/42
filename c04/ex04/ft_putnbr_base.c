void ft_putnbr_base(int nbr, char *base)
{
	;
}


int rec(int nbr, char *base)
{
	unsigned long basesize;
	basesize = sizeof(base)/sizeof(base[0]);

	if(nbr / basesize != 0)
		return( rec(nbr/basesize, base) );

	else if(nbr / basesize > 0)
		return(0);
}

#include <stdio.h>

int main()
{
char hex[] =  "0123456789ABCDEF";

printf("%d", rec(5, "0123456789ABCDEF"));

}
