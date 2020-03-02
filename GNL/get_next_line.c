/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 16:44:47 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/02 18:10:30 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

int get_next_line(int fd, char **line)
{
	static char *rest;
	char	*buff;
	int		nl;
	int		i;
	int		res;
	int		j;

	
	buff = (char *)calloc(BUFFER_SIZE + 1, sizeof(char));
	line[0] = (char *)malloc(BUFFER_SIZE + 1);
	nl = 0;
	j = 0;
	i = 0;
	while (rest)
	{
		line[0][j] = rest[i];
		i++;
		j++;
	}
	while (nl == 0)
	{
		i = 0;
		res = read(fd, buff, BUFFER_SIZE);
		while (i < BUFFER_SIZE)
		{

			if (buff[i] != '\n')
			{
				line[0][j] = buff[i] ;
				j++;
				i++;
			}
			else
			{
				rest = (char *)calloc(BUFFER_SIZE - i + 1, sizeof(char));
				j = 0;
				i++;
				while (j + i < BUFFER_SIZE)
				{
					rest[j] = buff[i + j];
					j++;
				}
				nl = 1;
				break;
			}
		}
	}
	return (0);
}


