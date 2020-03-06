/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:29:58 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 12:31:10 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void) {

	unsigned int m =     5;
	char src1[] = "Hello world";

	char dest1[8];

	ft_strncpy(dest1, src1, m);

	printf("%s\n", dest1);

    return 0;
}
