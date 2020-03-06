/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:02:09 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 13:03:19 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main()
{
    int result;

    result = ft_str_is_lowercase("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("");
    printf("Result: %d\n", result);

    return 0;
}
