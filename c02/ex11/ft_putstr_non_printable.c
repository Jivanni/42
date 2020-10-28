/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:39:43 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/27 19:53:23 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ascii_to_hex(char *buf)
{
	char value[3];
	char *tab;

	value[0] = '\\';
	value[1] = "0123456789abcdef"[*buf / 16];
	value[2] = "0123456789abcdef"[*buf % 16];
	tab = value;
	return (tab);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 127)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, ascii_to_hex(str), 3);
		}
		str++;
	}
}

int main(void) {
  char str[] = "\afs\nfdsfdsf fsadf ";

  ft_putstr_non_printable(str);
  return 0;
}
