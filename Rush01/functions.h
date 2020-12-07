/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:42:15 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 12:45:29 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

int		solve(int **matrix, int **views, int *solved);
int		is_there_empty(int **matrix, int *row, int *col);
int		is_alone(int **matrix, int row, int col, int tower);
int		check_views(int **matrix, int **views);
int		check_line(int **matrix, int row, int col, int num_of_views);
int		**fill_views(char *argv);
int		**allocate_mem(int size);
int		**clone_matrix(int **matrix);
void	free_matrix(int **matrix);
void	print_matrix(int **matrix);
int		get_view(int **matrix, int row, int view_line, int line_index);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		first_check(int argc, char **argv);
int		second_check(char **argv);

#endif
