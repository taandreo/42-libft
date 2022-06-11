/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 17:38:33 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/10 21:04:32 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	s1_size;
	size_t	s2_size;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	dest = ft_calloc(s1_size + s2_size + 1, sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s1, s1_size);
	ft_memcpy(&dest[s1_size], s2, s2_size);
	dest[s1_size + s2_size] = '\0';
	return (dest);
}
