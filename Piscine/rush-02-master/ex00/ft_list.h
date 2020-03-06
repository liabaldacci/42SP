/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:10:48 by mdeville          #+#    #+#             */
/*   Updated: 2017/07/22 20:04:08 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct		s_list
{
	struct s_list	*next;
	char			c;
}					t_list;

void				ft_list_push_front(t_list **begin_list, char c);
char				ft_list_pop(t_list **begin_list);
char				*ft_list_to_str(t_list *list);
int					ft_list_size(t_list *begin_list);

#endif
