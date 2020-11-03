/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:56:32 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/03 15:56:34 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int i;
	unsigned int temp;

	i = 0;
	temp = (unsigned int)nb;
	while ((i * i) < temp)
		i++;
	if ((i * i) == temp)
		return (i);
	return (0);
}
