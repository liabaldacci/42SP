/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 15:22:43 by gadoglio          #+#    #+#             */
/*   Updated: 2020/01/24 20:35:31 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	j = 0;
	i = dst_size;
	while (i < dstsize - 1 && src[j] != '\0' && dstsize > 0)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (j > 0)
		dst[i] = '\0';
	if (dst_size >= dstsize)
		return (dstsize + src_size);
	return (dst_size + src_size);
}
