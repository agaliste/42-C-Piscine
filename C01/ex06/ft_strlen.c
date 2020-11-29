/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 20:37:19 by agaliste          #+#    #+#             */
/*   Updated: 2020/11/29 21:00:19 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		i += 1;
		count++;
	}
	return (count);
}

int	main(int argc, const char *argv[])
{
	char str[] = {'H' ,'e' ,'l' ,'l' ,'o' ,' ' ,'w' ,'o' ,'r' ,'l' ,'d'};
	ft_strlen(str);
	return (0);
}
