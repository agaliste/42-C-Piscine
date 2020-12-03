/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 14:50:43 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 11:06:04 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] <= '/' || str[n] >= ':')
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
