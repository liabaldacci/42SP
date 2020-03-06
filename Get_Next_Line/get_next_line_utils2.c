/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <gadoglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 17:04:57 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/06 19:51:48 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_calloc(int size)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * size);
	//if (str == NULL)
		//return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

char		*ft_substr(char *s, int start, int end)
{
	char	*new;
	int		size;
	int		i;

	size = end - start;
	new = ft_calloc(size + 1);
	i = 0;
	while (i < size)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}

char		*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		size1;
	int		size2;
	int		i;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	new = ft_calloc(size1 + size2 + 1);
	i = 0;
	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		new[size1 + i] = s2[i];
		i++;
	}
	return (new);
}

