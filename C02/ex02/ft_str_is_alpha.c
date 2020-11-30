/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 13:51:28 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/30 16:44:54 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' || str[i] <= 'Z')
		{
			ft_putchar('d');
			return (1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
		++i;
	}
	return (1);
}
