/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:27:20 by tairan            #+#    #+#             */
/*   Updated: 2023/01/07 16:48:35 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	read_format(const char *format, t_list	**l, va_list args, int len)
{
	int		i;
	int		n;
	t_flag	f;

	i = 0;
	n = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && i < len - 1)
		{
			f = arg_parse(&format[i], args);
			if (f.is_flag)
			{
				append_str(l, &format[n], i - n);
				append_flag(l, f);
				i += f.read;
				n = i;
			}
			else
				i++;
		}
		else
			i++;
	}
	append_str(l, &format[n], i - n);
}

static int	ft_vprintf(const char *format, va_list args, int fd)
{
	int		len;
	t_list	*list;

	list = NULL;
	len = ft_strlen(format);
	read_format(format, &list, args, len);
	len = print_list(list, fd);
	ft_lstclear(&list, free_line);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	va_start(args, format);
	len = ft_vprintf(format, args, 1);
	va_end(args);
	return (len);
}

int	ft_dprintf(int fd, const char *format, ...)
{
	int		len;
	va_list	args;

	va_start(args, format);
	len = ft_vprintf(format, args, fd);
	va_end(args);
	return (len);
}
