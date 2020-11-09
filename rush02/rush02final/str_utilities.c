/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utilities.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llembo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:21:15 by llembo            #+#    #+#             */
/*   Updated: 2020/11/08 20:21:21 by llembo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utilities.h"

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strdup(char *src)
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

int		nb_strs(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != NULL)
	{
		i++;
	}
	return (i);
}
