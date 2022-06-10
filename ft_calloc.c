/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:49:01 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/09 22:10:37 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	if (num > INT_MAX || size > INT_MAX)
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
