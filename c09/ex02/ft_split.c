/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 12:30:19 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/10 12:30:20 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int		num_string(char *str, char *sep)
{
	int i;
	int sep_len;
	int count;

	count = 0;
	i = 0;
	sep_len = ft_strlen(sep);
	while(*str)
	{
		while (*str == sep[i] && i < sep_len)
			{
				str++;
				i++;
			}
		if (i == sep_len)
			count++;
		i = 0;
		if (!(*str))
			break;
		str++;
	}
	return count;
}

char	**fill_arr(char *str, char *sep, char **out, int substrn)
{

}

char	**ft_split(char *str, char *charset)
{
	int substrn;
	substrn = num_string(str, charset);
	char **out;
	out = (char **) malloc(sizeof(char*) * substrn + 1);
	out[substrn] = (char *) 0;
	return (out);
}

int main()
{
	char *a= "ciaoasdd";
	char *sep = ", ";
	printf("%d", num_string(a, sep));
}
