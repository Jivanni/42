/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llembo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:07:50 by llembo            #+#    #+#             */
/*   Updated: 2020/11/08 20:08:03 by llembo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_utilities.h"
#include "dict_parse.h"
#include "file_io.h"
#define ERROR "Dict Error\n"
#define KEY 0
#define VALUE 1

int		main(int argc, char **argv)
{
	char		*base_dict;
	t_entry		*dict;

	base_dict = "numbers.dict";
	if (argc == 1)
		ft_putstr(ERROR);
	else if (argc == 2)
	{
		if (!(dict = parse_manager(base_dict)))
			ft_putstr(ERROR);
		ft_putstr(lookup(dict, argv[1]));
		ft_putstr("\n");
	}
	else if (argc == 3)
	{
		base_dict = argv[1];
		if (!(dict = parse_manager(base_dict)))
			ft_putstr(ERROR);
		ft_putstr(lookup(dict, argv[2]));
		ft_putstr("\n");
	}
	else
		ft_putstr(ERROR);
}
