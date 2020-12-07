/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 07:58:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/07 08:56:28 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int res;

	res = 0;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			if (*(str - 1) >= 48 || *(str - 1) <= 57)
			{
				break ;
			}
		}
		if (*str >= 48 && *str <= 57)
		{
			res = res * 10 + *str - '0';
		}
		str++;
	}
	return (res);
}

int	main(void)
{
	char	test[] = "1234ab567";
	int		val;

	val = ft_atoi(test);
	printf("%d", val);
	return 0;
}
