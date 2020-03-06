/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:53:53 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/10 16:06:45 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main()
{
 char str[] = "asdf";
 char dest[] = "there";

 printf("%s", ft_strcpy(dest, str));

 return(0);
}
