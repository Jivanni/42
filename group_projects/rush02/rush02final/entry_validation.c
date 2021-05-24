/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llembo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:25:20 by llembo            #+#    #+#             */
/*   Updated: 2020/11/08 20:26:05 by llembo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "entry_validation.h"
#include "trim.h"

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

int		ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 127))
			return (0);
		str++;
	}
	return (1);
}

int		entry_validation(char **str)
{
	str[KEY] = trim(str[KEY]);
	str[VALUE] = trim(str[VALUE]);
	return (ft_str_is_numeric(str[KEY]) && ft_str_is_printable(str[VALUE]));
}
