/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atripard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 15:59:34 by atripard          #+#    #+#             */
/*   Updated: 2017/07/22 21:51:39 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(char c)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->next = NULL;
	elem->c = c;
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, char c)
{
	t_list	*new;

	new = ft_create_elem(c);
	if (begin_list == NULL)
	{
		*begin_list = new;
	}
	else
	{
		new->next = *begin_list;
		*begin_list = new;
	}
}

char	*ft_list_to_str(t_list *list)
{
	int		size;
	int		i;
	char	*res;

	if (list == NULL || list->c == '\0')
		return (NULL);
	size = ft_list_size(list);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);
	i = size - 1;
	while (i >= 0)
	{
		res[i] = ft_list_pop(&list);
		i--;
	}
	res[size] = '\0';
	return (res);
}

char	ft_list_pop(t_list **begin_list)
{
	t_list	*tmp;
	char	res;

	if (begin_list == NULL)
		return ('\0');
	tmp = *begin_list;
	*begin_list = (*begin_list)->next;
	res = tmp->c;
	free(tmp);
	return (res);
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		size;

	list = begin_list;
	size = 0;
	while (list)
	{
		list = list->next;
		size++;
	}
	return (size);
}
