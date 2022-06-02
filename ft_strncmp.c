/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:10:34 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/01 20:59:52 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *lhs, char *rhs, size_t count)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	if (count == 0)
		return (0);
	if (count == 1)
		return ((unsigned char)lhs[i] - (unsigned char)rhs[i]);
	s = count - 1;
	while ((lhs[i] != '\0') && (rhs[i] != '\0') && (lhs[i] == rhs[i]) && i < s)
		i++;
	return ((unsigned char)lhs[i] - (unsigned char)rhs[i]);
}
