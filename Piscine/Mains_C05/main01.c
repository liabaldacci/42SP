/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:06:18 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/15 18:07:04 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main(void)
{
	printf("The result is meant to be: 1\n");
	printf("The result is: %d\n", ft_recursive_factorial(0));
	printf("\nThe result is meant to be: 479001600\n");
	printf("The result is: %d\n", ft_recursive_factorial(12));
	printf("\nThe result is meant to be: 0\n");
	printf("The result is: %d\n", ft_recursive_factorial(13));
	return (0);
}
