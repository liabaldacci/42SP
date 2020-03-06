/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 21:10:15 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/23 22:39:38 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_std.h"
#include "rush_core.h"
#include <stdlib.h>

int		get_x(const char *str)
{
	int		x;

	x = 0;
	while (str[x] && str[x] != '\n')
		x++;
	return (x);
}

int		get_y(const char *str)
{
	int		y;
	int		line_count;

	y = 0;
	line_count = 0;
	while (str[y])
	{
		if (str[y] == '\n')
			line_count++;
		y++;
	}
	return (line_count);
}

void	print_colle(int i, int x, int y)
{
	ft_putstr("[colle-0");
	ft_putchar('0' + i);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
}

void	norm_is_stupid_sometimes(int i, int x, int y, int *nbcolle)
{
	if (*nbcolle)
		ft_putstr(" || ");
	print_colle(i, x, y);
	(*nbcolle) = (*nbcolle) + 1;
}

void	print_match(char *str)
{
	int		x;
	int		y;
	int		i;
	int		nbcolle;
	char	*tab;

	x = get_x(str);
	y = get_y(str);
	nbcolle = 0;
	i = 0;
	if (x == 0 || y == 0)
		return ;
	while (i < 5)
	{
		tab = rush_core(x, y, i);
		if (ft_strcmp(tab, str) == 0)
		{
			norm_is_stupid_sometimes(i, x, y, &nbcolle);
		}
		free(tab);
		i++;
	}
	if (nbcolle == 0)
		ft_putstr("aucune");
	ft_putchar('\n');
}
