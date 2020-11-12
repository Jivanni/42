void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	char	*temp;
	int		i;
	int		flag;

	while(1)
	{
		i = 0;
		flag = 0;
		while (tab[i] && tab[i + 1])
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				flag = 1;
			}
			i++;
		}
		if (!flag)
			break;
	}
}

