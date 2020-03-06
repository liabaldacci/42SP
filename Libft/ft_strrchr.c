/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 15:30:53 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/12 16:59:37 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	*res;

	res = (0);
	while (*s != '\0')
	{
		if (*s == c)
			res = (char *)s;
		s++;
	}
	st = (char *)s;
	if (c == '\0')
		return (st);
	return (res);
}
