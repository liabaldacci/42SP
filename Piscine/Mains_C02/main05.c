/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:02:09 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 13:08:19 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main()
{
    int result;

    result = ft_str_is_uppercase("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("");
    printf("Result: %d\n", result);

    return 0;
}
