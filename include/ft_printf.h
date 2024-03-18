/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 23:02:25 by tairan            #+#    #+#             */
/*   Updated: 2024/03/13 21:23:58 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "libft.h"

typedef struct s_line
{
	int		len;
	char	*line;
}			t_line;

typedef struct s_flag
{
	t_bool	left;
	t_bool	is_flag;
	t_bool	hash;
	t_bool	plus;
	t_bool	space;
	char	ch;
	char	type;
	int		width;
	int		read;
	int		precision;
	int		arg_size;
	char	*arg_str;
}			t_flag;

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);
// UTILS_00
char	*char_to_str(char c);
char	*get_string(char *s);
char	*join(char *line, char *text);
char	*add_char(int size, char c);
char	*ft_str_toupper(char *s);
// UTILS_01
char	*get_ptr(unsigned long p);
// LINKED_LIST
size_t	print_list(t_list *lst, int fd);
void	free_line(void *v);
// ARG_PARSE_00
t_flag	arg_parse(const char *s, va_list args);
// ARG_PARSE_01
void	add_plus(t_line *l);
void	add_space(t_flag f, t_line *l);
void	add_alt_form(t_flag f, t_line *l);
// APPEND_FLAG
void	append_flag(t_list **list, t_flag f);
void	append_str(t_list **list, const char *s, int size);
// GET_STR
char	*get_str(char c, va_list args);

#endif
