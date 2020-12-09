/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:29:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/09 08:42:03 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		cont;
	char	st;
	char	*oki;

	oki = str;
	cont = 0;
	while (*str != '\0')
	{
		st = *(str - 1);
		if ((st >= 58 && st <= 64) || cont == 0 || (st >= 123 && st <= 126))
		{
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		else if ((st >= 32 && st <= 47) || (st >= 91 && st <= 96))
		{
			if (*str >= 97 && *str <= 122)
				*str = *str - 32;
		}
		else if (*str >= 65 && *str <= 90)
			*str = *str + 32;
		str++;
		cont++;
	}
	return (oki);
}
