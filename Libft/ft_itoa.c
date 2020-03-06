/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:41:38 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/14 18:29:24 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_numlen(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	long	number;
	int		i;
	char	*final;

	number = n;
	i = ft_numlen(number);
	if (!(final = (char *)malloc((sizeof(char) * (i + 1)))))
		return (NULL);
	final[i--] = '\0';
	if (number == 0)
	{
		final[0] = 48;
		return (final);
	}
	if (number < 0)
	{
		final[0] = '-';
		number = number * -1;
	}
	while (number > 0)
	{
		final[i--] = 48 + (number % 10);
		number = number / 10;
	}
	return (final);
}
