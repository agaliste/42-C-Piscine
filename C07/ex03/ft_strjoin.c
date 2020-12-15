/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 09:44:44 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/15 10:31:38 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_create_str(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	if (size <= 0)
		len = 1;
	if (!(tab = (char *)malloc(sizeof(char) * len)))
		return (0);
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		j;
	int		k;

	i = -1;
	k = 0;
	tab = ft_create_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			tab[k++] = sep[j];
			j++;
		}
	}
	tab[k] = '\0';
	return (tab);
}
