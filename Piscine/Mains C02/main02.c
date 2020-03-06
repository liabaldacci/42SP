/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:47:55 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 12:49:50 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
    int result;

    result = ft_str_is_alpha("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("999");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);

    return 0;
}
