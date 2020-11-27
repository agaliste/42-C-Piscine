/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 21:08:20 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/27 21:39:14 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	display(int nb)
{
	int	first;
	int	second;

	if (nb > 9)
	{
		first = nb / 10;
		second = nb % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	o;

	i = 0;
	while (i <= 99)
	{
		o = i + 1;
		while (o <= 99)
		{
			display(i);
			ft_putchar(' ');
			display(o);
			if (i < 98 || o < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++o;
		}
		++i;
	}
}
