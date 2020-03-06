/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cluadia.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:06:02 by mtaiar-s          #+#    #+#             */
/*   Updated: 2019/10/22 19:31:54 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

char g_empty;
char g_obs;
char g_sqr;

void	translate(char **buff)
{
	int i;
	int j;
	int k;
	char **marie;

	printf("g_col no davi %d\n", g_num_col);
	marie = (char **)malloc((g_num_line) * sizeof(char *));
	i = -1;
	while (++i < g_num_line)
		marie[i] = (char *)malloc(g_num_col * sizeof(char));
	i = 0;
	while (buff[0][i] >= '0' && buff[0][i] <= '9')
		i++;
	g_empty = buff[0][i++];
	g_obs = buff[0][i++];
	g_sqr = buff[0][i];
	i = 0;
	k = 0;
	while (++k < g_num_line)
	{
		j = -1;
		while (buff[k][++j])
		{
			if (buff[k][j] == g_obs)
				marie[i][j] = '0';
			if (buff[k][j] == g_empty)
				marie[i][j] = '1';
		}
		marie[i][j] = '\0';
		i++;
	}
	i = 0;
//	g_num_line--;
	while (i < g_num_line - 1)
	{
		printf("%s\n", marie[i]);
		i++;
	}
	printf("chegou o fim do davi");
	ft_find_big_square(marie);
}
