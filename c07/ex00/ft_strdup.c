/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:40:52 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/06 10:40:54 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str++)
		len++;
	return (len);
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
