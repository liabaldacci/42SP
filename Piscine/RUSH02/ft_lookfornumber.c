/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookfornumber.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 07:22:29 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/19 10:54:49 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

void	ft_lookfornumber(int nb)
{
	int 	fd;
	int		countnl;
	char 	buff[691];
	
	
	fd = open("numbers.dict", O_RDONLY);
	if (fd < 0)
		write(1, "Error Opening Lib\n", 18);
	read(fd, buff, 790);
	countnl = ft_countnl(nb);
	printf("Contador de NL = %i\n", countnl); 
	ft_findtext(countnl, buff);
	ft_printtext();
//	write(1, &buff[8], 1);
	close(fd);
}

int	ft_countnl(int nb)
{
	int count;

	if (nb >= 0 && nb <= 19)
		count = nb;
	else if (nb >= 20 && nb <= 100)
		count = 19 + (nb - 10)/10;
	else
	{
		count = 29;
		while (nb >= 1000)
		{
			nb /= 10;
			count++;
		}
	}
	return (count);
}

void	ft_findtext(int countnl, char *buff)
{
	int		pos;
	int		count;
	int		pos0;
	int		pos1;
	int		i;

	pos = -1;
	count = 0;
	while (count < countnl + 2)
	{
		pos++;
		if (buff[pos] == '\n')
		{
			count++;
	//		printf("Achou NL\n");
			if (count == countnl)
				pos0 = pos;
			if (count == countnl + 1)
				pos1 = pos;
		}
//		printf("Posição %i\n", pos);
	}
	printf("Range de Impressão: %i", pos0);
	printf(" %i\n", pos1);
	g_text = (char *)malloc((pos1 - pos0) * sizeof(char));
	printf("Ponteiro 1 = %p\n", g_text);
	i = pos0 + 1;
	while (i < pos1)
	{
		*g_text = buff[i];
		g_text++;
		i++;
	}
	*g_text = '\0';
	printf("Ponteiro soma = %p\n", g_text);
	g_text = g_text - (pos1 - pos0) + 1;
	printf("Ponteiro volta = %p\n", g_text);
}

void	ft_printtext(void)
{
	int spaces;

//	printf("%s", g_text);
	spaces = 0;
	while (*g_text != ':')
		g_text++;
	g_text++;
	while (*g_text == ' ')
		g_text++;
	while (*g_text)
	{
		if (*g_text != ' ')
		{
			write(1, &(*g_text), 1);
			spaces = 0;
		}
		if (!spaces && *g_text == ' ')
		{
			write(1, " ", 1);
			spaces = 1;	
		}
		g_text++;
	} 
}
