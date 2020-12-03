/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:46:19 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 11:05:50 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 'A' || str[n] > 'Z')
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
