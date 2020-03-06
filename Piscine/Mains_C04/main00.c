/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 15:00:15 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/16 10:11:34 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int     ft_strlen(char *str);
int	main(void)
{
	char **p;
	char *str1 = {"Teste"};
	p = &str1;
	printf("Tamanho: %i", ft_strlen(str1));
	printf("P = %p", p);
}
