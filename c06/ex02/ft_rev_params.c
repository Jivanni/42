/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 10:32:47 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/04 10:32:50 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	char	*ptr;
	int		i;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			ptr = argv[i];
			while (*ptr)
				write(1, ptr++, 1);
			write(1, "\n", 1);
			i--;
		}
	}
}
