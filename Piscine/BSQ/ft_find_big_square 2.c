/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_big_square.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmardega <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:36:53 by jmardega          #+#    #+#             */
/*   Updated: 2019/10/22 21:10:12 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

void	ft_find_big_square(char **map)
{
	int i;
	int j;
	char **sub;
	int i_max;
	int j_max;
	char max;

	i = 0;
	sub = (char **)malloc(g_num_line * sizeof(char *));
	while (i < g_num_line)
	{
		sub[i] = (char *)malloc(g_num_col * sizeof(char));
		i++;
	}
	i = -1;
	printf("chegue 1 =D\n");
	while (++i < g_num_line - 1)
		sub[i][0] = map[i][0];
	printf("cheguei 2 XD\n");
	j = -1;
	while (++j < g_num_col)
		sub[0][j] = map[0][j];
	i = 0;
	printf("pqp globais g_col %d\n g_line %d\n", g_num_col, g_num_line);
	while (++i < g_num_line)
	{
		j = 0;
		while (++j < g_num_col)
		{
			printf("j = %d\n", j);
			printf("i = %d\n", i);
			if (map[i][j] == '1')
				sub[i][j] = (min(sub[i][j - 1], sub[i - 1][j], sub[i - 1][j - 1])) + 1;
			else
				sub[i][j] = '0';
		}
	}
	printf("Sai da caralha 8=========================================================================================D\n");
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
	printf("max %c\n linha %d\n coluna %d\n", max, i_max, j_max);
	mark_sqr(i_max, j_max, max);
}
