/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainBSQ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 08:14:23 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/22 21:02:53 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "ft.h"

int		g_num_line;
int		g_num_col;
char	**g_board;

char	**ft_make_board(char *buffer)
{
	char	**g_board;
	int		i;
	int		j;

	i = 0;
	while (buffer[i] != '\n')
		i++;
	j = i + 1;
	while (buffer[j] != '\n')
		j++;
	g_num_col = j - (i + 1);
	i = 0;
	g_board = (char **)malloc(g_num_line * sizeof(char *));
	while (i < g_num_line)
	{
		g_board[i] = (char *)malloc((j)*sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	while (*buffer && i < g_num_line)
	{
		if (*buffer == '\n')
		{
			g_board[i][j] = '\0';
			i++;
			j = 0;
			buffer++;
		}
		if (i < g_num_line)
		{
			g_board[i][j] = *buffer;
			j++;
			buffer++;
		}
	}
	//g_num_col = j;
	printf("g_col %d\n", g_num_col);
	return (g_board);
}

int		get_file_size(char *filename)
{
	int fd;
	char buf;
	int i;
	int ret;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		write(1, "Failed to open.\n", 16);
		return -1;
	}
	while((ret = read(fd, &buf, 1)))
	{
		i++;
		if (ret < 0)

		{
			write(1, "Error reading\n", 14);
			return -1;
		}
		if (buf == '\n')	
			++g_num_line;
	}
	if (close(fd) < 0) 
	{
		write(1, "Error closing\n", 14);
		return -1;
	}
	return i;
}

int		ft_readfile(char *file)
{
	int		size;
	char	*buffer;
	int		fd;
	int		ver;

	g_num_line = 0;
	g_num_col = 0;
	size = get_file_size(file);
	if (size < 0)
		return (-1);
	buffer = (char *)malloc(size * sizeof(char));
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (-1);
	ver = read(fd, buffer, size);
	if (ver < 0)
		return (-1);
	g_board = ft_make_board(buffer);
	close(fd);
	translate(g_board);
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int fd;

	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		fd = ft_readfile(argv[i]);
		if (fd < 0)
			write(1, "Error\n", 6);
		i++;
	}
}
