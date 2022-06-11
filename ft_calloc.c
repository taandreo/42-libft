/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:49:01 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/10 17:30:24 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (__SIZE_MAX__ / size < num)
		return (NULL);
	p = malloc(num * size);
	if (!p)
		return (NULL);
	while (i < num * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *) p);
}
