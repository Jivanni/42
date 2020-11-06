/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 11:53:24 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/06 11:53:27 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define FALSE false
# define TRUE true

typedef enum {
	false = 0,
	true = 1
}	t_bool;

# define EVEN(x) (x % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif
