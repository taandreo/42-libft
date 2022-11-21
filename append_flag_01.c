/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_flag_01_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:24:15 by tairribe          #+#    #+#             */
/*   Updated: 2022/11/20 21:03:20 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	add_plus(t_line *l)
{
	if (l->line[0] != '-')
	{
		l->line = join(ft_strdup("+"), l->line);
		l->len++;
	}
}

void	add_space(t_flag f, t_line *l)
{
	if (l->line[0] != '-' && ft_strchr("uid", f.type))
	{
		l->line = join(ft_strdup(" "), l->line);
		l->len++;
	}
}

void	add_alt_form(t_flag f, t_line *l)
{
	if (f.type == 'x' && l->line[0] != '0')
	{
		l->line = join(ft_strdup("0x"), l->line);
		l->len += 2;
	}
	if (f.type == 'X' && l->line[0] != '0')
	{
		l->line = join(ft_strdup("0X"), l->line);
		l->len += 2;
	}
}
