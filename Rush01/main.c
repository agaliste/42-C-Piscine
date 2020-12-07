/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 12:29:45 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 18:28:54 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

int	main(int argc, char **argv)
{
	int **views;
	int **matrix;
	int solved;
	int i;

	i = 0;
	if (first_check(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	views = fill_views(argv[1]);
	matrix = allocate_mem(4);
	solved = 0;
	solve(matrix, views, &solved);
	if (!solved)
		write(1, "Error\n", 6);
	return (0);
}
