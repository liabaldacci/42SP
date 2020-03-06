/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 15:48:46 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 20:51:55 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char string1[] = "cinquenta+e+um";
	char string2[] = "quarenta-e-duas";
	char string3[] = "42palavras";
	char string4[] = "tudo bem?";
	char string5[] = "ol\\\'a,";
	printf("%s\n\n", ft_strcapitalize(string1));
	printf("%s\n\n", ft_strcapitalize(string2));
	printf("%s\n\n", ft_strcapitalize(string3));
	printf("%s\n\n", ft_strcapitalize(string4));
	printf("%s\n\n", ft_strcapitalize(string5));
	return (0);
}
