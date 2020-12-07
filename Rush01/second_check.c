/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorozco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 18:08:49 by rorozco-          #+#    #+#             */
/*   Updated: 2020/12/06 18:10:31 by rorozco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	repetition(char **ext, int j, char c, int r)
{
	int l;
	int i;

	i = 0;
	l = 0;
	while (l <= 6)
	{
		if (ext[1][j + l] == c)
			i++;
		l = l + 2;
	}
	if (i > r)
		return (1);
	return (0);
}

int	repetition_extension(char **ext, int j)
{
	char	ck[4];
	char	c;
	int		i;

	i = 0;
	while (i <= 6)
	{
		c = ext[1][j + i];
		if (c == '1')
			ck[0] = repetition(ext, j, c, 1);
		else if (c == '2')
			ck[1] = repetition(ext, j, c, 3);
		else if (c == '3')
			ck[2] = repetition(ext, j, c, 2);
		else
			ck[3] = repetition(ext, j, c, 1);
		i = i + 2;
	}
	if (ck[0] == 1 || ck[1] == 1 || ck[2] == 1 || ck[3] == 1)
		return (1);
	return (0);
}

int	once_x_side(char **ext)
{
	int j;
	int l;
	int k;

	j = 0;
	while (j <= 24)
	{
		l = 0;
		k = 0;
		while (l < 8)
		{
			if (ext[1][j + l] == '1')
				k++;
			l = l + 2;
		}
		if (k == 0)
			return (1);
		j = j + 8;
	}
	return (0);
}

int	second_check(char **argv)
{
	int		j;
	int		a;

	j = 0;
	while (j <= 24)
	{
		a = repetition_extension(argv, j);
		if (a == 1)
			return (1);
		j = j + 8;
	}
	a = once_x_side(argv);
	return (a);
}
