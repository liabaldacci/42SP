/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:56:30 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 12:58:57 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
    int result;

    result = ft_str_is_numeric("12345");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("123 45");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("aaa");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("");
    printf("Result: %d\n", result);

    return (0);
}
