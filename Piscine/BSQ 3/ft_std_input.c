/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_std_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 07:08:59 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/23 19:06:17 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
**	Recebe duas string e devolve uma nova string com o conteúdo das duas;
*/

char	*extend_str(char *str, char *append)
{
	int		size;
	char	*new;

	new = malloc(sizeof(char) * size);
	size = (ft_strlen(str) + ft_strlen(append));
	ft_strcat(new, str);
	ft_strcat(new, append);
	new[size] = '\0';
	return (new);
}

/*
**	Lê o stdin e devolve uma string com o conteúdo lido
*/

char	*read_stdin(void)
{
	char	*lines;
	char	*line;
	char	*temp;

	lines = malloc(sizeof(char) * 1);
	lines[0] = '\0';
	line = malloc(sizeof(char) * 2500);
	while (read(0, line, 200) > 1)
	{
		temp = lines;
		lines = extend_str(lines, line);
		free(temp);
	}
	return (lines);
}
