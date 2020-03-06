/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:33:18 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 18:36:36 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	rush00(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == 0 && j == j_max) ||
		(i == i_max && j == 0) || (i == i_max && j == j_max))
		return ('o');
	else if (i == 0 || i == i_max)
		return ('-');
	else if (j == 0 || j == j_max)
		return ('|');
	return (' ');
}

char	rush01(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == i_max && j == j_max))
		return ('/');
	else if ((i == i_max && j == 0) || (i == 0 && j == j_max))
		return ('\\');
	else if (i == 0 || i == i_max || j == 0 || j == j_max)
		return ('*');
	return (' ');
}

char	rush02(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == 0 && j == j_max))
		return ('A');
	else if ((i == i_max && j == 0) || (i == i_max && j == j_max))
		return ('C');
	else if (i == 0 || i == i_max || j == 0 || j == j_max)
		return ('B');
	return (' ');
}

char	rush03(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == i_max && j == 0))
		return ('A');
	else if ((i == 0 && j == j_max) || (i == i_max && j == j_max))
		return ('C');
	else if (i == 0 || i == i_max || j == 0 || j == j_max)
		return ('B');
	return (' ');
}

char	rush04(int i, int j, int i_max, int j_max)
{
	if ((i == 0 && j == 0) || (i == i_max && j == j_max))
		return ('A');
	else if ((i == i_max && j == 0) || (i == 0 && j == j_max))
		return ('C');
	else if (i == 0 || i == i_max || j == 0 || j == j_max)
		return ('B');
	return (' ');
}
