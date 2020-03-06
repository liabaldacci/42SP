/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 19:18:47 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/12 16:28:03 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
