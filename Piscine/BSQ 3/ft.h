/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msales-a <msales-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:51:28 by lborges-          #+#    #+#             */
/*   Updated: 2019/10/23 17:34:22 by lborges-         ###   ########.fr       */
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
char		**charge(char **sub, char **map);
void		translate(char **buff);
void		ft_find_big_square(char**map);
void		mark_sqr(int i_max, int j_max, char max);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
char		*ft_strcat(char *dest, char *src);
void		check(char **sub);
char		*read_stdin(void);
char		*extend_str(char *str, char *append);
int			ft_atoi(char *str);
int			ft_check_firstline(char *table);
int			ft_check_table(char *table);
int			ft_str_is_numeric(char *str);
extern int	g_num_line;
extern int	g_num_col;
extern char g_empty;
extern char g_obs;
extern char g_sqr;
extern char **g_board;
#endif
