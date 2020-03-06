/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:16:03 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 13:37:02 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
    int result;
	
	result = ft_str_is_printable("asd153f");
	printf("Expected: 1\n");
	printf("Result: %d\n\n", result);
	
	result = ft_str_is_printable("QWEôRTY");
	printf("Expected: 0\n");
	printf("Result: %d\n\n", result);
	
	result = ft_str_is_printable("asdf1ë34");
	printf("Expected: 0\n");
	printf("Result: %d\n\n", result);

	result = ft_str_is_printable("9Ñ99");
	printf("Expected: 0\n");
	printf("Result: %d\n\n", result);

	result = ft_str_is_printable("");
	printf("Expected: 1\n");
	printf("Result: %d\n\n", result);

	return 0;
}
