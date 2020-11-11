/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:11:30 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/11 14:11:32 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_char(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
		if (c == s[i++])
			return (0);
	return (1);
}

int		count_occ(char *str, char *charset)
{
	int i;
	int start;
	int count;

	i = 0;
	count = 0;
	start = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]))
		{
			if (start == 0)
			{
				count++;
				start++;
			}
		}
		else if (!check_char(charset, str[i]) && start != 0)
			start = 0;
		i++;
	}
	return (count);
}

void	finder(char *str, char *charset, int *indexarr, int *lenghtarr)
{
	int k;
	int start;
	int i;

	k = 0;
	i = 0;
	while (str[i])
	{
		if (check_char(charset, str[i]) && start == 0)
		{
			indexarr[k] = i;
			lenghtarr[k] += 1;
			start = 1;
		}
		else if (check_char(charset, str[i]) && start != 0)
			lenghtarr[k] += 1;
		else if (!check_char(charset, str[i]) && start != 0)
		{
			start = 0;
			k++;
		}
		i++;
	}
}

char	**allocate(char *str, int *lenghtarr, int *indexarr, int lenght)
{
	int		i;
	int		k;
	char	**newarr;
	int		n;

	newarr = (char**)malloc(sizeof(char*) * lenght + 1);
	i = 0;
	while (i < lenght)
	{
		k = 0;
		newarr[i] = (char*)malloc((sizeof(char) * lenghtarr[i]) + 1);
		while (k < lenghtarr[i])
		{
			n = indexarr[i] + k;
			newarr[i][k] = str[n];
			k++;
		}
		newarr[i][k] = '\0';
		i++;
	}
	newarr[i] = 0;
	return (newarr);
}

char	**ft_split(char *str, char *charset)
{
	int *indexarr;
	int *lenghtarr;
	int lenght;
	int i;

	i = 0;
	lenght = count_occ(str, charset);
	indexarr = malloc(sizeof(int*) * lenght);
	lenghtarr = malloc(sizeof(int*) * lenght);
	while (i < lenght)
	{
		indexarr[i] = 0;
		lenghtarr[i++] = 0;
	}
	i = 0;
	finder(str, charset, indexarr, lenghtarr);
	return (allocate(str, lenghtarr, indexarr, lenght));
}
