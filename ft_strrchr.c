/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:47:40 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/01 20:51:32 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{	
	unsigned char	c;
	int				i;

	i = ft_strlen((char *)str);
	c = (unsigned char) ch;
	while (i >= 0)
	{
		if ((unsigned char) str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
