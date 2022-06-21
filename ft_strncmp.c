/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 04:10:34 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/20 22:34:50 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	if (n == 0)
		return (0);
	if (n == 1)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	s = n - 1;
	while ((s1[i] != '\0') && (s2[i] != '\0')
		&& ((unsigned char)s1[i] == (unsigned char)s2[i]) && i < s)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
