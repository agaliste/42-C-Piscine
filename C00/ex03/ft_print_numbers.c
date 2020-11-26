/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 18:39:02 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/26 19:11:53 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	number;

	number = 0;
	while (number <= 9)
	{
		ft_putchar(number);
		number++;
	}
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
