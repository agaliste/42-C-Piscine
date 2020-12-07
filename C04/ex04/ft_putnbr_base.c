/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 15:08:00 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/07 17:08:41 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

void		ft_putnbr(int nb)
{
	int pi;

	pi = nb + '0';
	if (nb > -2147483648 || nb <= 2147483647)
	{
		if (nb == -2147483648)
		{
			write(1, '-', 1);
			write(1, '2', 1);
			ft_putnbr(147483648);
		}
		else if (nb >= 10)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb < 0)
		{
			nb = -nb;
			write(1, '-', 1);
			ft_putnbr(nb);
		}
		else
			write(1, &pi, 1);
	}
}

long int	x_to_the_n(int x, int ex)
{
	int i;
	int number;

	i = 0;
	number = 1;
	while (i < ex)
	{
		number *= x;
		i++;
	}
	return (number);
}

int			ft_convertert(int base, int n)
{
	int num;
	int quotient;
	int remainder;
	int i;

	num = 0;
	quotient = n;
	remainder = 0;
	i = 0;
	while (quotient != 0)
	{
		remainder = quotient % base;
		quotient = quotient / base;

		num = (remainder * x_to_the_n(10, i)) + num;
		i++;
	}
}

void		ft_putnbr_base(int nbr, char *base)
{
	char test[] = "0123456789";

	if (ft_strcmp(*base, *test) == 0)
	{
		ft_putnbr(nbr);
	}
	if (*base == "01")
	{
		ft_convertert(2, nbr);
	}
	if (*base == "0123456789ABCDEF")
	{
		ft_convertert(16, nbr);
	}
	if (*base == "poniguay")
	{
		ft_convertert(8, nbr);
	}
}
