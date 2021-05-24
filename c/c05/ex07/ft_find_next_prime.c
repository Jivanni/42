/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:56:58 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/03 15:57:02 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb > 1);
}

int		ft_find_next_prime(int nb)
{
	while (1)
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
}
