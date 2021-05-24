/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_parse.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:07:16 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/08 20:07:19 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_PARSE_H
# define DICT_PARSE_H
# define KEY 0
# define VALUE 1
# include "str_utilities.h"
# include "file_io.h"
# include "ft_split.h"
# include "entry_validation.h"

typedef	struct	s_entry
{
	char	*key;
	char	*value;
	int		key_len;
	int		val_len;
}				t_entry;
char			**parse(char *path);
char			*lookup (t_entry *dict, char *input);
t_entry			*parse_manager(char *path);
#endif
