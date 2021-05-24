/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:49:23 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/02 15:34:20 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *str, char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (!*to_find);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if ((*str == *to_find) && match(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}
