/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 13:37:59 by gadoglio          #+#    #+#             */
/*   Updated: 2019/10/21 18:22:39 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strdup(char *src);

int main ()
{
  char *str= "hewwo";
  char *copy;
  copy = ft_strdup(str);
  printf("%s", copy);
  return 0;
}
