/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:32:34 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/22 16:32:42 by gcusuman         ###   ########.fr       */
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
    char i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i++;
    }
}
