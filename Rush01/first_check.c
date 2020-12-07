/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:05:54 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 18:30:05 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	argument_number_error(int n, char **ext)
{
	int j;

	if (n != 2)
		return (1);
	j = 0;
	while (ext[1][j] != '\0')
		j++;
	if (j != 31)
		return (1);
	return (0);
}

int	invalid_views(char **ext)
{
	int i;

	i = 0;
	while (i < 30)
	{
		if (ext[1][i] < '1' || ext[1][i] > '4' || ext[1][i + 1] != ' ')
			return (1);
		i = i + 2;
	}
	if (ext[1][30] < '1' || ext[1][30] > '4')
		return (1);
	return (0);
}

int	incomplete_addition(char **ext)
{
	int j;

	j = 0;
	while (j < 31)
	{
		if (j < 7 || (j > 15 && j < 24))
		{
			if ((ext[1][j] + ext[1][j + 8] - 48) > '5')
				return (1);
			else if ((ext[1][j] + ext[1][j + 8] - 48) < '3')
				return (1);
		}
		j = j + 2;
	}
	return (0);
}

int	first_check(int argc, char **argv)
{
	int a;

	a = argument_number_error(argc, argv);
	if (a == 0)
	{
		a = invalid_views(argv);
		if (a == 0)
		{
			a = incomplete_addition(argv);
			if (a == 0)
				a = second_check(argv);
		}
	}
	return (a);
}
