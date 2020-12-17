/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:34:42 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/17 17:11:29 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;
	int length;

	length = max - min + 1;
	i = 0;
	tab = malloc(sizeof(*tab) * lenght);
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
