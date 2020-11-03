/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:54:18 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/03 15:54:20 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int i;

	res = 1;
	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb)
		res *= i++;
	return (res);
}
