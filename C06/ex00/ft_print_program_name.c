/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:54:56 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/12 11:56:15 by agaliste         ###   ########.fr       */
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
	write(1, argv[0], ft_strlen(argv[0]));
	return (0);
}
