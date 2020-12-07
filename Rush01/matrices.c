/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrices.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:45:36 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 12:45:38 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "functions.h"

int		**fill_views(char *argv)
{
	int i;
	int j;
	int **views;

	j = 0;
	i = 0;
	views = allocate_mem(4);
	while (i < 16)
	{
		if (argv[i] == ' ')
		{
			argv++;
			continue;
		}
		views[j][i % 4] = argv[i] - '0';
		if (i % 4 == 3)
			j++;
		i++;
	}
	return (views);
}

int		**allocate_mem(int size)
{
	int i;
	int j;
	int **matrix;

	matrix = malloc(sizeof(int *) * size);
	i = 0;
	while (i < size)
	{
		matrix[i] = malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
			matrix[i][j++] = 0;
		i++;
	}
	return (matrix);
}

int		**clone_matrix(int **matrix)
{
	int **clone;
	int i;
	int j;

	clone = allocate_mem(4);
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			clone[i][j] = matrix[i][j];
			j++;
		}
		i++;
	}
	return (clone);
}

void	free_matrix(int **matrix)
{
	int i;

	i = 0;
	while (i < 4)
		free(matrix[i++]);
	free(matrix);
}

void	print_matrix(int **matrix)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(matrix[i][j]);
			j++;
			if (j != 4)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
