/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nuovo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <gcusuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:40:44 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/22 15:21:36 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	write(1, "abcdefghijklmnopqrstuvwxyz", 26);
}

int		main(void)
{
	ft_print_alphabet();
}
