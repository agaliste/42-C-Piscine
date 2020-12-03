/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 13:25:32 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 14:04:15 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int j;
	int i;
	int backup;

	i = 0;
	j = 0;
	backup = size;
	while (size > 1 && (dest[i] = src[i]) != 0)
	{
		dest[i] = src[i];
		--size;
		++i;
	}
	if (backup != 0)
	{
		dest[i] = '\0';
	}
	while (src[j])
	{
		++j;
	}
	return (j);
}
