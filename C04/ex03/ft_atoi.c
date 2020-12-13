/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 07:58:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/13 16:33:22 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int is_neg;
	int nb;

	nb = 0;
	i = 0;
	is_neg = 1;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' ||
	str[i] == '\t' || str[i] == '\v' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			is_neg *= -1;
		}
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * is_neg);
}
