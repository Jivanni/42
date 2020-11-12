int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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

#include <stdio.h>

int		main()
{
	char *tab[5] = {"dddd", "aaa", "cccc", "aaa", 0} ;
	ft_sort_string_tab(tab);
	int i =0;
	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}

}
