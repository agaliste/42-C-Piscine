/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:34:42 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/14 16:36:02 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = malloc(sizeof(*tab));
	if (!(min > max))
	{
		while (min < max)
		{
			tab[i] = min;
			i++;
			min++;
		}
	}
	tab[i] = '\0';
	return (tab);
}
