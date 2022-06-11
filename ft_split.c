/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 23:43:09 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/11 19:20:25 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char const *s, char c)
{
	size_t	words;
	size_t	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			words++;
			i--;
		}
		i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**dict;
	size_t	words;
	size_t	index;
	size_t	i;

	dict = ft_calloc(countwords(s, c) + 1, sizeof(char *));
	if (!dict)
		return (NULL);
	words = 0;
	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			index = i;
			while (s[i] != c && s[i])
				i++;
			dict[words] = ft_substr(s, index, i - index);
			words++;
			i--;
		}
		i++;
	}
	return (dict);
}
