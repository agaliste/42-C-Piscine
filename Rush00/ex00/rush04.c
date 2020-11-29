/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:27:21 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/29 16:11:52 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((px == 1 && py == 1) || (px == x && py == y && x > 1 && y > 1))
				ft_putchar('A');
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar('B');
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar('B');
			else if ((px == x && py == 1) || (py == y && px == 1))
				ft_putchar('C');
			else
				ft_putchar(' ');
			px++;
		}
		py++;
		px = 1;
		ft_putchar('\n');
	}
}
