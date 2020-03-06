/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:10:52 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/15 19:12:34 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index);

int	main(void)
{
	printf("\nFibonacci number is meant to be: 0\n");
	printf("Fibonacci number is: %d\n", ft_fibonacci(0));
	printf("\nFibonacci number is meant to be: 2\n");
	printf("Fibonacci number is: %d\n", ft_fibonacci(3));
	printf("\nFibonacci number is meant to be: 5\n");
	printf("Fibonacci number is: %d\n", ft_fibonacci(5));
	printf("\nFibonacci number is meant to be: 1597\n");
	printf("Fibonacci number is: %d\n", ft_fibonacci(17));
	return (0);
}
