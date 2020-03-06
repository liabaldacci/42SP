/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:36:56 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/15 18:40:57 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("The result is meant to be: 1\n");
	printf("The result is: %d\n", ft_recursive_power(1, 1));
	printf("\nThe result is meant to be: 117649\n");
	printf("The result is: %d\n", ft_recursive_power(7, 6));
	printf("\nThe result is meant to be: 1\n");
	printf("The result is: %d\n", ft_recursive_power(0, 0));
	return (0);
}
