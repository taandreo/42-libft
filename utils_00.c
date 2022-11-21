/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_00_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 02:19:50 by tairribe          #+#    #+#             */
/*   Updated: 2022/11/20 21:03:57 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*char_to_str(char c)
{
	char	*s;

	s = ft_calloc(2, 1);
	if (!s)
		return (NULL);
	s[0] = c;
	return (s);
}

char	*ft_str_toupper(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{	
		s[i] = ft_toupper(s[i]);
		i++;
	}
	return (s);
}

char	*get_ptr(unsigned long p)
{
	char	*s;
	char	*tmp;

	if (p == 0)
		return (ft_strdup("(nil)"));
	s = ft_utoa(p, 16);
	tmp = ft_strjoin("0x", s);
	free(s);
	return (tmp);
}

char	*get_string(char *s)
{
	if (s == NULL)
		return (ft_strdup("(null)"));
	return (ft_strdup(s));
}

char	*join(char *line, char *text)
{
	char	*tmp;

	if (!line)
		return (text);
	tmp = ft_strjoin(line, text);
	free(line);
	free(text);
	return (tmp);
}
