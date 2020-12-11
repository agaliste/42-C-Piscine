/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 07:58:22 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/09 10:01:50 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int res;
	int neg;
	int n;

	res = 0;
	neg = 0;
	n = 0;
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
		{
			if (n > 0 && (*(str - 1) >= 48 && *(str - 1) <= 57))
				break ;
			if (*str == '-')
				neg++;
		}
		n++;
		if (*str >= 48 && *str <= 57)
			res = res * 10 + *str - '0';
		str++;
	}
	if (neg % 2 == 0)
		return (res);
	else
		return (res * -1);
}
