/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:30:43 by rsan-mig          #+#    #+#             */
/*   Updated: 2020/11/29 16:16:53 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int px;
	int py;

	px = 1;
	py = 1;
	while (py <= y)
	{
		while (px <= x)
		{
			if (px == 1 && (py < 2 || py == y))
				ft_putchar('o');
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar('-');
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar('|');
			else if (px == x && (py < 2 || py == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 1;
		ft_putchar('\n');
	}
}
