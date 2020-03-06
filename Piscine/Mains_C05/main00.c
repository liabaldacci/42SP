/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 17:24:28 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/15 17:39:10 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	printf("The result is meant to be: 1\n");
	printf("The result is: %d\n", ft_iterative_factorial(0));
	printf("\nThe result is meant to be: 479001600\n");
	printf("The result is: %d\n", ft_iterative_factorial(12));
	printf("\nThe result is meant to be: 0\n");
	printf("The result is: %d\n", ft_iterative_factorial(13));
	return (0);
}
