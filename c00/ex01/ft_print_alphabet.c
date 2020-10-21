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

void    ft_print_alphabet(void);
void    ft_putchar(char c);

int     main(void)
{
    ft_print_alphabet();

    return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_alphabet(void)

{
    char i = 'a';
    while (i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}