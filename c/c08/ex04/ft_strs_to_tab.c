/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:49:03 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/06 20:49:05 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char				*ft_strdup(char *src)
{
	char	*out;
	int		len;

	len = ft_strlen(src);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (*src)
	{
		*out++ = *src++;
	}
	*out = '\0';
	return (out - len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*out;

	if (!(out = malloc((ac + 1) * sizeof(struct s_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		out[i].size = ft_strlen(av[i]);
		out[i].str = av[i];
		out[i].copy = ft_strdup(av[i]);
		i++;
	}
	out[i] = (struct s_stock_str){0, 0, 0};
	return (out);
}
