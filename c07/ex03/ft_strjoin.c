/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:04:28 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/06 11:04:30 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
		dest[i++] = src[k++];
	return (dest);
}

int		ft_strlen(char *str)
{
	int unsigned len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*allocate(int len, int size)
{
	char *ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	if (size == 0)
		*ptr = 0;
	return (ptr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*out;
	int		len;
	int		i;

	len = 0;
	i = 0;
	if (size == 0)
		return (allocate(1, size));
	while (i < size)
		len += ft_strlen(strs[i++]);
	len += ft_strlen(sep) * (size - 1);
	if (!(out = allocate(len + 1, size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(out, strs[i]);
		if (i < size - 1)
			ft_strcat(out, sep);
		i++;
	}
	out[len] = '\0';
	return (out);
}
