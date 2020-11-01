/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_manager.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzanot <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:27:42 by lmarzanot         #+#    #+#             */
/*   Updated: 2020/11/01 13:31:51 by lmarzanot        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_MANAGER_H
# define FILL_MANAGER_H

void	fill_manager_col(int **table, int **clues);
void	fill_manager_row(int **table, int **clues);
void	fill_three_col(int **table, int **clues);
void	fill_three_row(int **table, int **clues);
void	fill_all(int **table, int **clues);
#endif
