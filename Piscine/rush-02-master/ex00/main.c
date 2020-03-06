/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:18:31 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/23 22:40:44 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "readstd.h"
#include "ft_list.h"
#include "check.h"

int		main(void)
{
	t_list	*list;
	char	*str;

	list = readstd();
	str = ft_list_to_str(list);
	if (str == 0)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	print_match(str);
	free(str);
	return (0);
}
