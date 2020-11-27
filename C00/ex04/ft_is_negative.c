/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:31:03 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/27 20:49:19 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char detector;

	if (n >= 0)
	{
		detector = 'P';
		ft_putchar(detector);
	}
	else if (n < 0)
	{
		detector = 'N';
		ft_putchar(detector);
	}
}
