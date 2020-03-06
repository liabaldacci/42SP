/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 17:43:50 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/11 18:18:13 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void					*ft_memmove(void *dst, const void *source,
						size_t len)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)dst;
	src = (unsigned char *)source;
	i = 1;
	if (dest > src)
		while (i <= len && dst != source)
		{
			dest[len - i] = src[len - i];
			i++;
		}
	else
	{
		ft_memcpy(dst, source, len);
	}
	return (dst);
}
