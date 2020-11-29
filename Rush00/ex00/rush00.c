/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsan-mig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:30:43 by rsan-mig          #+#    #+#             */
/*   Updated: 2020/11/29 10:45:17 by rsan-mig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int px;
	int py;

	px = 0;
	py = 0;
	while (py <= y)
	{
		while (px <= x)
		{
			if (px == 0 && (py < 1 || py == y - 1))
				ft_putchar('o');
			else if ((py == 0 || py == y - 1) && (px > 0 && px < x - 1))
				ft_putchar('-');
			else if ((px == 0 || px == x - 1) && (py > 0 && py < y - 1))
				ft_putchar('|');
			else if (px == x - 1 && (py < 1 || py == y - 1))
				ft_putchar('o');
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 0;
		ft_putchar('\n');
	}
}
