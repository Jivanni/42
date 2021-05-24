/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:32:37 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/04 10:32:39 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	char	*ptr;
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ptr = argv[i++];
			while (*ptr)
				write(1, ptr++, 1);
			write(1, "\n", 1);
		}
	}
}
