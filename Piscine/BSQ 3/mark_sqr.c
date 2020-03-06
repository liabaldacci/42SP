/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:35:59 by nfranco-          #+#    #+#             */
/*   Updated: 2019/10/23 19:44:51 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	mark_sqr(int i_max, int j_max, char max)
{
	int i;
	int j;

	i = i_max + 1;
	while (i > i_max - (max - '0') + 1)
	{
		j = j_max;
		while (j > j_max - (max - '0'))
		{
			g_board[i][j] = g_sqr;
			j--;
		}
		i--;
	}
	i = 1;
	while (i < g_num_line)
	{
		ft_putstr(g_board[i++]);
		ft_putstr("\n");
	}
}

char	min(char a, char b, char c)
{
	char	m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}
