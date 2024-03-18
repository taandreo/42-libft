/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startswith.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:25:45 by tairribe          #+#    #+#             */
/*   Updated: 2024/03/13 21:29:45 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_startswith(const char *str, const char *prefix) {
	size_t	prefix_len;

	prefix_len = ft_strlen(prefix);
    if (prefix_len > ft_strlen(str)){
		return (false);
    }
    return (ft_strncmp(str, prefix, prefix_len) == 0);
}
