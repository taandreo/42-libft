/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:41:24 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/23 02:19:41 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*rp;

	i = 0;
	rp = (unsigned char *)s;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return (rp + i);
		i++;
	}
	return (NULL);
}
