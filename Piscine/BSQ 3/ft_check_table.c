/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:07:18 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/23 19:40:50 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int count;
	int sign;

	count = 0;
	sign = 1;
	while (*str != '\0' && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str != '\0' && (*str == '+' || (*str == '-')))
	{
		if (*str == '-')
			sign = -1 * sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		count = count * 10 + *str - '0';
		str++;
	}
	count = sign * count;
	return (count);
}

int		ft_check_firstline(char *table)
{
	int		j;
	char	*num;
	int		i;
	int		n;

	j = 0;
	while (table[j] != '\n')
		j++;
	if (j < 3)
		return (-1);
	if (table[j] == table[j - 1] || table[j] == table[j - 2]
			|| table[j - 1] == table[j - 2])
		return (-1);
	num = (char *)malloc(j * sizeof(char));
	i = 0;
	while (i + 3 < j)
	{
		num[i] = table[i];
		i++;
	}
	n = ft_str_is_numeric(num);
	if (n <= 0)
		return (-1);
	return (j);
}

int		ft_checkelements(char *table, int j)
{
	int	i;

	i = j;
	while (table[i] != '\0')
	{
		if (table[i] != table[j - 2]
				&& table[i] != table[j - 3]
				&& table[i] != '\n'
					&& table[i] != '\0')
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int		ft_check_table(char *table)
{
	int j;
	int num_col0;
	int num_col;
	int first;

	first = ft_check_firstline(table);
	if (first < 0)
		return (-1);
	j = first + 1;
	while (table[j] != '\n')
		j++;
	num_col0 = j - first - 1;
	num_col = 0;
	while (table[++j] != '\0')
	{
		if (table[j] == '\n')
		{
			if (num_col != num_col0)
				return (-1);
			num_col = 0;
			j++;
		}
		num_col++;
	}
	return (ft_checkelements(table, first));
}
