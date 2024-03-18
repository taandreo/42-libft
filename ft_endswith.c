/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endswith.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 21:40:01 by tairribe          #+#    #+#             */
/*   Updated: 2024/03/17 22:31:59 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_endswith(const char *str, const char *suffix) {
	size_t	suffix_len;
	size_t	str_len;

	suffix_len = ft_strlen(suffix);
	str_len = ft_strlen(str);
    if (suffix_len > ft_strlen(str)){
		return (false);
    }
    return (ft_strncmp(&str[str_len - suffix_len], suffix, suffix_len) == 0);
}