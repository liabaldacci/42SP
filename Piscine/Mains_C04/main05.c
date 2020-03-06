/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:00:15 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/16 12:03:32 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int     ft_atoi_base(char *str, char *base);
int		main(void)
{
	char str1[] = "    +mrdcasd";
	char base[] = "murdoc";
	printf("Resultado Ft_Atoi: %i\n", ft_atoi_base(str1, base));
}
