/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:35:32 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/09 18:37:50 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
  char dest[20];
  char src[] = "programming";
  int size = sizeof(dest);
  printf("Size: &d\n", size);
  printf("%d\n",ft_strlcpy(dest,src,size));
  printf("%s\n",dest);
}
