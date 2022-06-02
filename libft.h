/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 19:17:14 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/01 21:19:46 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int ch);
int	ft_isalnum(int ch);
int	ft_isascii(int ch);
int	ft_isdigit(int ch);
char	*ft_strchr(const char *str, int ch);
int	ft_strlen(char *str);
char	*ft_strrchr(const char *str, int ch);
int	ft_tolower(int ch);
int	ft_strncmp(const char *lhs, char *rhs, size_t count);

#endif