
int		ft_any(char **tab, int(*f)(char*))
{
	int i;
	i = 0;
	while(*tab)
	{
		if((*f)(tab[i]))
			return (1);
		tab++;
		i++;
	}
	return (0);
}


#include <unistd.h>
#include <stdio.h>

int	ft_plusone(int nb)
{
	return(nb + 1);
}


int main()
{
	int tab[] = {1,2,3,4,5,6} ;
	printf("%d", ft_map(tab, 6, &ft_plusone)[6]);
}
