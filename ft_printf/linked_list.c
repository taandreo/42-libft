/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:53:49 by tairribe          #+#    #+#             */
/*   Updated: 2023/01/07 16:49:57 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	free_line(void *v)
{
	t_line	*l;

	l = (t_line *)v;
	free(l->line);
	free(l);
}

static void	print_str(char *s, int len, int fd)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

size_t	print_list(t_list *lst, int fd)
{
	size_t	size;
	t_line	*l;

	size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		l = lst->content;
		print_str(l->line, l->len, fd);
		size += l->len;
		lst = lst->next;
	}
	return (size);
}

void	append_str(t_list **list, const char *s, int size)
{
	t_line	*line;

	if (size <= 0)
		return ;
	line = ft_calloc(1, sizeof(t_line));
	line->len = size;
	line->line = ft_calloc(size, sizeof(char));
	ft_memcpy(line->line, s, size);
	ft_lstadd_back(list, ft_lstnew(line));
}
