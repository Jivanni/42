
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
