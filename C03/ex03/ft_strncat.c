/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 09:39:07 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/04 10:26:40 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (i < nb && src[i])
	{
		dest[dest_size] = src[i];
		dest_size++;
		i++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
