/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:59:43 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/11 11:14:26 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int sol;

	sol = 1;
	while (power > 0)
	{
		if (power == 1)
			sol = sol * nb;
		power = power / 2;
		nb = nb * nb;
	}
	return (sol);
}
