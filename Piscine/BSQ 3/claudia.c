/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cluadia.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaiar-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:06:02 by mtaiar-s          #+#    #+#             */
/*   Updated: 2019/10/23 18:52:47 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	g_empty;
char	g_obs;
char	g_sqr;
int		g_num_line;
int		g_num_col;

char	**ft_marie(char **buff)
{
	int		i;
	char	**marie;

	marie = (char **)malloc((g_num_line) * sizeof(char *));
	i = -1;
	while (++i < g_num_line)
		marie[i] = (char *)malloc(g_num_col * sizeof(char));
	i = 0;
	while (buff[0][i])
		i++;
	g_empty = buff[0][i - 3];
	g_obs = buff[0][i - 2];
	g_sqr = buff[0][i - 1];
	return (marie);
}

void	translate(char **buff)
{
	int		i;
	int		j;
	int		k;
	char	**marie;

	marie = ft_marie(buff);
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
	ft_find_big_square(marie);
}
