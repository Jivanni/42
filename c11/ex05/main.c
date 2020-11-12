/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:14:21 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/12 11:14:23 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operators.h"
#include "nums.h"

int	calculate(int a, char op, int b)
{
	static int (*ptr[5]) (int x, int y) = {
		&sum,
		&sub,
		&mul,
		&div,
		&mod
	};

	if (op == '+')
		return (ptr[0](a, b));
	else if (op == '-')
		return (ptr[1](a, b));
	else if (op == '*')
		return (ptr[2](a, b));
	else if (op == '/')
		return (ptr[3](a, b));
	else if (op == '%')
		return (ptr[4](a, b));
	return (0);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	op;

	if (argc != 4)
		return (0);
	op = argv[2][0];
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_validate_input(b, op))
	{
		ft_putnbr(calculate(a, op, b));
		ft_putstr("\n");
	}
}
