/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:20:30 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/15 18:33:29 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("The result is meant to be: 1\n");
	printf("The result is: %d\n", ft_iterative_power(1, 1));
	printf("\nThe result is meant to be: 117649\n");
	printf("The result is: %d\n", ft_iterative_power(7, 6));
	printf("\nThe result is meant to be: 1\n");
	printf("The result is: %d\n", ft_iterative_power(0, 0));
	return (0);
}
