/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:33:16 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/02 18:10:32 by gadoglio         ###   ########.fr       */
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
	char *line;

	fd = open("test.txt", O_RDONLY);

	line = 0;
	get_next_line(fd, &line);
	printf("%s\n\n\n\n\n\n", line);
	get_next_line(fd, &line);
	printf("%s\n", line);
	return (0);
}
