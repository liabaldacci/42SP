/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readstd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 12:53:27 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/23 09:42:50 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

t_list	*readstd(void)
{
	t_list	*begin;
	char	c;

	begin = NULL;
	while (read(0, &c, 1) > 0)
	{
		ft_list_push_front(&begin, c);
	}
	return (begin);
}
