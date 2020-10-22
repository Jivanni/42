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

void    ft_is_negative(int n);
void    ft_putchar(char c);

int     main(void)
{
    ft_is_negative(-6);

    return (0);
}

void ft_is_negative(int n)
{
    char    result;
    result = (n < 0) ? 'N' : 'P';
    ft_putchar(result);

}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}