/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:10:49 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/12 11:10:56 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*out;

	out = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		out[i] = (*f)(tab[i]);
		i++;
	}
	return (out);
}
