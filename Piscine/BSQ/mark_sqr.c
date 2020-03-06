/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark_sqr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:35:59 by nfranco-          #+#    #+#             */
/*   Updated: 2019/10/22 21:29:04 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft.h"

void	mark_sqr(int i_max, int j_max, char max)
{
	int i;
	int j;

	i = i_max + 1;
	printf("o que eh %c\n", g_sqr);
	printf("Int max %i", max - '0');
	while (i > i_max - (max - '0') + 1)
	{
		j = j_max;
		while (j > j_max - (max - '0'))
		{
			g_board[i][j] = g_sqr;
			printf("Imprimiu o que %c\n", g_board[i][j]);
		//	printf("Imprimiu onde %i,%i", i ,j);
			j--;
		}
		i--;
	}
	i = 0;
	while (i < g_num_line - 1)
	{
		printf("%s\n", g_board[i]);
		i++;
	}
//	printf("ACABOU O CARALHO ()...");
}
