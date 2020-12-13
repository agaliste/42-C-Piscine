/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 12:18:42 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/12 12:29:09 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int i;

	i = 0;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		write(1, argv[n], ft_strlen(argv[n]));
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
