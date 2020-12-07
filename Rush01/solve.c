/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:42:01 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 12:42:03 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	solve(int **matrix, int **views, int *solved)
{
	int row;
	int col;
	int i;
	int **clone;

	if (!is_there_empty(matrix, &row, &col))
		return (1);
	i = 0;
	while (++i <= 4)
	{
		if (!is_alone(matrix, row, col, i))
			continue;
		clone = clone_matrix(matrix);
		clone[row][col] = i;
		if (solve(clone, views, solved) && check_views(clone, views))
		{
			*solved = 1;
			print_matrix(clone);
			free_matrix(clone);
			return (1);
		}
		free_matrix(clone);
	}
	return (0);
}

int	is_there_empty(int **matrix, int *row, int *col)
{
	*row = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (matrix[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	is_alone(int **matrix, int row, int col, int tower)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (matrix[row][i++] == tower)
			return (0);
	}
	i = 0;
	while (i < 4)
	{
		if (matrix[i++][col] == tower)
			return (0);
	}
	return (1);
}

int	check_views(int **matrix, int **views)
{
	int row;
	int col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (!check_line(matrix, row, col, views[row][col]))
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	check_line(int **matrix, int row, int col, int num_of_views)
{
	int i;
	int temp_num;

	i = 0;
	while (i < 4)
	{
		temp_num = get_view(matrix, row, col, i);
		if (temp_num == 0)
			return (0);
		num_of_views--;
		while (i + 1 < 4 && temp_num > get_view(matrix, row, col, i + 1))
			i++;
		i++;
	}
	return (num_of_views == 0);
}
