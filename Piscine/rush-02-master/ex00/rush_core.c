/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:36:55 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/23 13:16:53 by atripard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rushes.h"

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b - 1;
	*b = tmp - 1;
}

char	*rush_core(int x, int y, int index_rush)
{
	int				i;
	int				j;
	int				len;
	char			*tab;

	if (!(tab = (char *)malloc(sizeof(char) * ((x + 1) * y + 1))))
		return (NULL);
	len = x + 1;
	i = 0;
	if (x > 0 && y > 0)
	{
		ft_swap(&x, &y);
		while (i <= x)
		{
			j = 0;
			while (j <= y)
			{
				tab[i * len + j] = g_rushtab[index_rush](i, j, x, y);
				j++;
			}
			tab[i++ * len + j] = '\n';
		}
	}
	tab[i * len] = '\0';
	return (tab);
}
