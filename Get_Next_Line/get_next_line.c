/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:44:47 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/03 21:38:14 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, int start, int len)
{
	char	*new;
	int	size;
	int	i;

	if (!s)
		return (NULL);
	size = ft_strlen((char *)s);
	if (start > size)
		return (ft_strdup(""));
	new = (char *)malloc((sizeof(char) * (len + 1)));
	if (new == NULL)
		return (0);
	i = 0;
	while (i < len && *s)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}

int             find_new_line(char *str)
{
    int         i;

    i = 0;
    while (i < ft_strlen(str))
    {
        if(str[i] == '\n')
            return (i);
        i++;        
    }
    return (-1);
}

int	do_rest(char *rest, char **line, char *temp)
{
	int	nl_index;

	if (find_new_line(rest) == 0)
    {
        *line = ft_strdup("");
    	rest = ft_substr(rest, 1, (ft_strlen(rest) - 1));
        return (1);
    }
	else if (find_new_line(rest) == -1)
	{
		temp = ft_substr(rest, 0, ft_strlen(rest));
		free(rest);
		return (0);
	}
	else
	{
		nl_index = find_new_line(rest);
    	temp = ft_substr(rest, 0, nl_index);
     	rest = ft_substr(rest, nl_index + 1, (ft_strlen(rest) - nl_index));
		*line = temp;
		return (1);
	}
}

int				get_next_line(int fd, char **line)
{
    static char *rest;
    char        *temp;
    char        *buff;
    int         count;
    int         nl_index;
    int         result;
	int			nl;
    
    if (BUFFER_SIZE <= 0 || !line || (read(fd, NULL, 0) < 0) || fd < 0)
        return (-1);
    count = 0;
    temp = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (temp == NULL)
		return (-1);
    if (rest)
    {
        if (do_rest(rest, line, temp) == 1)
            return (1);
    }
	nl = 0;
	while (nl == 0)
	{
		buff = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		if (buff == NULL)
			return (-1);
		result = read(fd, buff, BUFFER_SIZE);
		if (result < 0)
			return (-1);
		if (result == 0)
		{
			*line = temp;
			return (0);
		}
		if (find_new_line(buff) == -1)
			temp = ft_strjoin(temp, buff);
		else
		{
			nl_index = find_new_line(buff);
			rest = (char *)ft_calloc(BUFFER_SIZE - nl_index + 1, sizeof(char));
			if (rest == NULL)
				return (-1);
			rest = ft_substr(buff, nl_index + 1, (BUFFER_SIZE - nl_index - 1));
			buff = ft_substr(buff, 0, nl_index);
			temp = ft_strjoin(temp, buff);
			nl = 1;
		}
		free(buff);
	}
	*line = temp;
	return (1);
}
