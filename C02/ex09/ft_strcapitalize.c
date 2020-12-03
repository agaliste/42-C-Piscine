/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:29:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 11:11:35 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int				p;
	unsigned int	n;

	p = 0;
	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] >= ' ' && str[n] < '/') || (str[n] >= ':' && str[n] <= '@'))
			p = 0;
		else if (str[n] >= '0' && str[n] <= '9')
			p = 1;
		else if (str[n] >= 'A' && str[n] <= 'Z')
			p = 1;
		else if (str[n] >= 'a' && str[n] <= 'z' && p == 0)
		{
			*str = *str - 32;
			p = 1;
		}
		n++;
	}
	return (str);
}
