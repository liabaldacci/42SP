/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <gadoglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:16:41 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/06 20:32:34 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					find_nl(char *str)
{
	int				i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

int					ft_do_rest(char *rest, char *final, char **line)
{
	int				nl_index;

	nl_index = find_nl(rest);
	if (nl_index == 0)
	{
		rest = ft_substr(rest, 1, ft_strlen(rest));
		*line = ft_substr("", 0, 0);
		return (0);
	}
	else if (nl_index < 0)
		final = ft_strjoin(final, rest);
	else
	{
		final = ft_strjoin(final, ft_substr(rest, 0, nl_index));
		rest = ft_substr(rest, nl_index, ft_strlen(rest));
	}
	return (1);
}

int					get_next_line(int fd, char **line)
{
	int				nl;
	int				res;
	char			*final;
	char			*buff;
	static char		*rest;

	if (fd < 0 || line == NULL)
		return (-1);
	final = ft_calloc(BUFFER_SIZE);
	if (rest && (ft_do_rest(rest, final, line) == 0))
		return (1);
	nl = 0;
	while (nl == 0)
	{
		buff = ft_calloc(BUFFER_SIZE + 1);
		res = read(fd, buff, BUFFER_SIZE);
		if (res < 0)
			return (-1);
		if (rest == 0)
			return (0);
		if ((find_nl(buff)) < 0)
			final = ft_strjoin(final, buff);
		else
		{
			rest = ft_substr(buff, (find_nl(buff)) + 1, ft_strlen(buff));
			final = ft_strjoin(final, (ft_substr(buff, 0, (find_nl(buff)))));
			nl = 1;
		}
	}
	*line = ft_substr(final, 0, ft_strlen(final));
	free(final);
	return (1);
}
