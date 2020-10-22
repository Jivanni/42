/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <gcusuman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 20:22:24 by gcusuman          #+#    #+#             */
/*   Updated: 2020/10/22 20:46:04 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_triplet(char a, char b, char c)
{
	char output[5];

	output[0] = a + '0';
	output[1] = b + '0';
	output[2] = c + '0';
	output[3] = ',';
	output[4] = ' ';
	if (a == 7 && b == 8 && c == 9)
	{
		output[3] = '\0';
		output[4] = '\0';
	}
	write(1, output, 5);
}

int	main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar_triplet(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}