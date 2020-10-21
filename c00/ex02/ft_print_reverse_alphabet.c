/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:40:44 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/21 19:40:50 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_reverse_alphabet(void);
void    ft_putchar(char c);

int     main(void)
{
    ft_print_reverse_alphabet();

    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)

{
    char i = 'z';
    while (i >= 'a')
    {
        ft_putchar(i);
        i--;
    }
}