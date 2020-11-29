/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsan-mig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 10:18:17 by rsan-mig          #+#    #+#             */
/*   Updated: 2020/11/29 11:34:53 by rsan-mig         ###   ########.fr       */
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
			if ((px == 0 && py == 0) || (px == x - 1 && py == y - 1))
				ft_putchar(47);
			else if ((py == 0 || py == y - 1) && (px > 0 && px < x - 1))
				ft_putchar(42);
			else if ((px == 0 || px == x - 1) && (py > 0 && py < y - 1))
				ft_putchar(42);
			else if ((px == 0 && py == y - 1) || (px == x - 1 && py == 0))
				ft_putchar(92);
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 0;
		ft_putchar('\n');
	}
}
