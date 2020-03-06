/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 17:50:08 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/03 18:01:11 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_bzero(void *s, int n)
{
	int	i;
	char	*st;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}

void			*ft_calloc(int count, int size)
{
	unsigned	*ptr;

	ptr = (void *)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int		ft_strlen(const char *str)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (str[i++] != '\0')
	{
		length++;
	}
	return (length);
}

char		*ft_strdup(const char *s1)
{
	size_t	size;
	size_t	i;
	char	*new;

	size = ft_strlen(s1);
	new = (char *)malloc((sizeof(char) * size) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		size1;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	i = ft_strlen(s2);
	new = (char *)malloc((sizeof(char) * (size1 + i + 1)));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[size1 + i] = s2[i];
		i++;
	}
	new[size1 + i] = '\0';
	return (new);
}