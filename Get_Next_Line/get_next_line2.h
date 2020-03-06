/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <gadoglio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 22:15:25 by gadoglio          #+#    #+#             */
/*   Updated: 2020/03/06 19:52:50 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int		ft_strlen(char *str);
char	*ft_substr(char *s, int start, int end);
char	*ft_strjoin(char *s1, char *s2);
int		find_nl(char *str);
int		get_next_line(int fd, char **line);
int		ft_do_rest(char *rest, char *final, char **line);
char	*ft_calloc(int size);

#endif
