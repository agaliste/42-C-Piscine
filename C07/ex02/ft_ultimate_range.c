/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 09:20:05 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/17 17:21:00 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
