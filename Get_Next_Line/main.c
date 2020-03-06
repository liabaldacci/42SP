/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:33:16 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/04 17:04:37 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int get_next_line(int fd, char **line);

int		main()
{
	int	fd;
	int	value;
	char *line;

	fd = open("normal.txt", O_RDONLY);

	value = 1;
	while (value == 1)
	{
		value = get_next_line(fd, &line);
		printf("\nLine: %s\nReturn: %i\n", line, value);
	}
	return (0);
}
