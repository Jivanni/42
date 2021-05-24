/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   entry_validation.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcusuman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:15:23 by gcusuman          #+#    #+#             */
/*   Updated: 2020/11/08 20:15:25 by gcusuman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTRY_VALIDATION_H
# define ENTRY_VALIDATION_H

# define KEY 0
# define VALUE 1
# define ERROR "Dict Error\n"
# include "str_utilities.h"
# include "file_io.h"
# include "trim.h"
# include "ft_split.h"

int entry_validation(char **str);

#endif
