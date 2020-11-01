/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 11:55:54 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 11:55:56 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTSTRING_H

# define FT_PUTSTRING_H

# include <unistd.h>

void	print_string(char *str);
void	put_char(char c);
void	print_number(int nbr);
void	print_table(int **table);
#endif
