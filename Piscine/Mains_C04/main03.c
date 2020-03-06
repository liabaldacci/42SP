/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:00:15 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/17 11:12:02 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int     ft_atoi(char *str);
int	main(void)
{
	char str1[] = " -a- 12a3";
	printf("Resultado Ft_Atoi: %i\n", ft_atoi(str1));
	printf("Resultado Atoi: %i\n", atoi(str1));
	char str2[] = " -+19a3";
	printf("Resultado Ft_Atoi: %i\n", ft_atoi(str2));
	printf("Resultado Atoi: %i", atoi(str2));
}
