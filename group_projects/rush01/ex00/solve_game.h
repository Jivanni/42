/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_game.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:34:59 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 14:44:12 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_GAME_H
# define SOLVE_GAME_H
# include "fill_manager.h"
# include "ft_putstring.h"
# include "check_view.h"
# include <stdlib.h>

int	**init(int **clues);
int	check_num(int **table, int row, int col);
int	check_game(int **table, int **clues);
int	solve_rec(int **table, int **clues, int pos);
int	solve_game(int **clues);
#endif
