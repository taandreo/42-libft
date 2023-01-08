/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:17:38 by tairribe          #+#    #+#             */
/*   Updated: 2022/11/20 21:06:03 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*add_char(int size, char c)
{
	char	*s;

	s = ft_calloc(size + 1, sizeof(char));
	ft_memset(s, c, size);
	return (s);
}
