/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_view.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:19:55 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 13:25:25 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_VIEW_H
# define CHECK_VIEW_H

int	see_row_left(int *game);
int	see_row_right(int *game);
int see_col_up(int **game, int col);
int	see_col_down(int **game, int col);
#endif
