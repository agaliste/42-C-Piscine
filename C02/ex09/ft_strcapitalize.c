/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:29:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/03 13:56:35 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	p;

	p = 0;
	while (*str != '\0')
	{
		if ((*str >= ' ' && *str <= '/') || (*str >= ':' && *str <= '@'))
			p = 0;
		else if (*str >= '0' && *str <= '9')
			p = 1;
		else if (*str >= 'A' && *str <= 'Z')
			p = 1;
		else if (*str >= 'a' && *str <= 'z' && p == 0)
		{
			*str -= 32;
			p = 1;
		}
		str++;
	}
	return (str);
}
