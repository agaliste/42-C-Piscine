/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:51:28 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 11:06:00 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] <= '@' || (str[n] >= '[' && str[n] <= '`') || str[n] >= '{')
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
