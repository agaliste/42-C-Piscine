/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:29:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/04 12:06:19 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char *start;

	start = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if ((start == str) || *(str - 1) == 32 || *(str - 1) == 45)
				*str -= 32;
			if (*(str - 1) == 43)
				*str -= 32;
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			if (!(*(str - 1) == 32) && !(*(str - 1) == 45) &&
				!(*(str - 1) == 43))
				*str += 32;
			if (*(str - 2) == 44)
				*str += 32;
		}
		str++;
	}
	return (start);
}
