/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utilities.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:17:18 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/08 20:17:20 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_UTILITIES_H
# define STR_UTILITIES_H
# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		nb_strs(char **strs);
char	*ft_strcat(char *dest, char *src);

# define KEY 0
# define VALUE 1

#endif
