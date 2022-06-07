/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 05:53:46 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/02 18:51:11 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	s_size;
	unsigned int	d_size;

	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	i = d_size;
	c = 0;
	if (size == 0 || size <= d_size)
		return (s_size + size);
	while (src[c] != '\0' && c < (size - d_size - 1))
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (d_size + s_size);
}
