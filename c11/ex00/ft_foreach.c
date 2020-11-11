void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while(i < length)
		(*f)(tab[i++]);
}

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char temp[1];

	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		write(1, "8", 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		temp[0] = (48 + nb % 10);
		write(1, temp, 1);
	}
}


int main()
{
	int tab[] = {1} ;
	ft_foreach(tab, 1, &ft_putnbr);

}
