/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:09:12 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 11:06:12 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 'a' || str[n] > 'z')
		{
			i++;
		}
		n++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
		return (1);
}
