/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:43:04 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/06 10:43:06 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*out;
	size_t	i;
	size_t	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	if ((out = (int *)malloc(sizeof(int) * size)))
	{
		while (i < size)
			out[i++] = min++;
	}
	return (out);
}
