/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:08:37 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/12 16:40:27 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	char	*st;
	size_t	i;

	i = 0;
	st = (char *)s;
	while (i < n)
	{
		if (*st == c)
			return (st);
		else
			st++;
		i++;
	}
	return (0);
}
