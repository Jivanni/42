int check(int a, int b)
{
	if(a < b)
		return(-1);
	else if(a == b)
		return(0);
	else
		return(1);
}

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while(i < length - 1)
	{
		if((*f)(tab[i], tab[i+1]) < 0)
			return (0);
	}
	return (1);
}

