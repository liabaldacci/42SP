/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:51:28 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/22 21:11:42 by nfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

char		**ft_make_board(char *buffer);
int			get_file_size(char *filename);
int			ft_readfile(char *file);
int			main(int argc, char **argv);
char		min(char a, char b, char c);
void		translate(char **buff);
void		ft_find_big_square(char**map);
void		mark_sqr(int i_max, int j_max, char max);
extern int	g_num_line;
extern int	g_num_col;
extern char g_empty;
extern char g_obs;
extern char g_sqr;
extern char **g_board;
#endif
