/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gadoglio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 18:03:14 by gadoglio          #+#    #+#             */
/*   Updated: 2020/02/14 18:22:14 by gadoglio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	num_of_words(char const *s, char c)
{
	int		total;
	int		i;

	i = 0;
	total = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		total++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (total);
}

static char		*next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char*)s);
}

char			**ft_split(char const *s, char c)
{
	char	**final;
	size_t	i;
	size_t	words;

	if (s != NULL)
	{
		words = num_of_words(s, c);
		if (!(final = (char**)malloc(sizeof(char*) * (words + 1))))
			return (NULL);
		i = 0;
		while (i < words)
		{
			s = next_word(s, c);
			final[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!final[i])
				return (NULL);
			i++;
			s += ft_wordlen(s, c);
		}
		final[words] = NULL;
		return (final);
	}
	return (NULL);
}
