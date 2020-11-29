/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 14:19:28 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/29 16:14:55 by agaliste         ###   ########.fr       */
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
			if ((px == 1 || px == x) && (py == 1))
				ft_putchar('A');
			else if ((py == 1 || py == y) && (px > 1 && px < x))
				ft_putchar('B');
			else if ((px == 1 || px == x) && (py > 1 && py < y))
				ft_putchar('B');
			else if ((px == x || px == 1) && (py < 2 || py == y))
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
