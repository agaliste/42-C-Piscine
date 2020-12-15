/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 09:20:05 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/15 09:32:36 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int lenght;

	length = max - min + 1;
	i = 0;
	tab = malloc(sizeof(*tab) * lenght);
	if (min >= max)
	{
		ret = NULL;
		return (0);
	}
	if (!(*tab))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
