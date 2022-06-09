/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:35:13 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/09 03:05:26 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	c;

	i = 0;
	if (!little[0])
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		c = i;
		j = 0;
		while (big[c] == little[j] && little[j] != '\0' && c < len)
		{
			c++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
