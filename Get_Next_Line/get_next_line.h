/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:15:25 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/12 17:20:31 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void    ft_bzero(void *s, int n);
void    *ft_calloc(int count, int size);
int     ft_strlen(const char *str);
char    *ft_strdup(const char *s1);
char    *ft_strjoin(char const *s1, char const *s2);
int     find_new_line(char *str);
int     get_next_line(int fd, char **line);

#endif