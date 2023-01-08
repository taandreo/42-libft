/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_str_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 19:49:12 by tairribe          #+#    #+#             */
/*   Updated: 2022/11/20 21:03:46 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*get_str(char c, va_list args)
{	
	if (c == 'c')
		return (char_to_str(va_arg(args, int)));
	if (c == '%')
		return (ft_strdup("%"));
	if (c == 's')
		return (get_string(va_arg(args, char *)));
	if (c == 'i')
		return (ft_itoa(va_arg(args, int)));
	if (c == 'd')
		return (ft_itoa(va_arg(args, int)));
	if (c == 'u')
		return (ft_utoa(va_arg(args, unsigned int), 10));
	if (c == 'x')
		return (ft_utoa(va_arg(args, unsigned int), 16));
	if (c == 'X')
		return (ft_str_toupper(ft_utoa(va_arg(args, unsigned int), 16)));
	if (c == 'p')
		return (get_ptr((unsigned long) va_arg(args, void *)));
	return (NULL);
}
