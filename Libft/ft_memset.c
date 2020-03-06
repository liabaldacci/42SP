/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:13:46 by gadoglio          #+#    #+#             */
/*   Updated: 2020/01/24 18:22:03 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*st;

	i = 0;
	st = (char *)b;
	while (i < len)
	{
		st[i] = c;
		i++;
	}
	return (b);
}
