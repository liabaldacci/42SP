/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:25:19 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/14 11:28:54 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, char *to_find);

int	main(void)
{
	char string[] = "HelloThere";
	char find[] = "T";
	char *pointer;
	pointer = ft_strchr(string, find);
	printf("Pointer teste: %s\n", pointer);
    pointer = ft_strchr(string, find);
    printf("Pointer original: %s\n", pointer);
	return (0);
}
