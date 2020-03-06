/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_big_square2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:36:53 by jmardega          #+#    #+#             */
/*   Updated: 2019/10/23 11:58:11 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		g_num_col;
int		g_num_line;

void	ft_find_big_square(char **map)
{
	int		i;
	int		j;
	char	**sub;

	i = -1;
	sub = (char **)malloc(g_num_line * sizeof(char *));
	while (++i < g_num_line)
		sub[i] = (char *)malloc(g_num_col * sizeof(char));
	i = -1;
	while (++i < g_num_line - 1)
		sub[i][0] = map[i][0];
	j = -1;
	while (++j < g_num_col)
		sub[0][j] = map[0][j];
	sub = charge(sub, map);
	check(sub);
}

char	**charge(char **sub, char **map)
{
	int i;
	int j;

	i = 0;
	while (++i < g_num_line)
	{
		j = 0;
		while (++j < g_num_col)
		{
			if (map[i][j] == '1')
				sub[i][j] = (min(sub[i][j - 1], sub[i - 1][j],
							sub[i - 1][j - 1])) + 1;
			else
				sub[i][j] = '0';
		}
	}
	return (sub);
}

void	check(char **sub)
{
	int		i;
	int		j;
	int		i_max;
	int		j_max;
	char	max;

	max = sub[0][0];
	i_max = 0;
	j_max = 0;
	i = -1;
	while (++i < g_num_line)
	{
		j = -1;
		while (++j < g_num_col)
		{
			if (max < sub[i][j])
			{
				max = sub[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}
	mark_sqr(i_max, j_max, max);
}
