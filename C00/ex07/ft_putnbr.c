/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 21:40:11 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/27 21:48:03 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	nb = 42;

	ft_putint(nb);
}

int	main(void)
{
	ft_putnbr();
	return (0);
}
