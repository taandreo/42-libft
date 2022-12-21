/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:18:43 by tairribe          #+#    #+#             */
/*   Updated: 2022/12/21 19:49:05 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ishex(int ch)
{
	if ((ch >= 'A' && ch <= 'F') || (ch >= 'a' && ch <= 'f')
		|| (ch >= '0' && ch <= '9'))
		return (1);
	return (0);
}

static int	get_total(const char *str, int base)
{
	int	t;
	int	i;

	i = 0;
	t = 0;
	while (ft_ishex(str[i]))
	{
		if (str[i] >= '0' && str[i] <= '9')
			t = t * base + (str[i] - '0');
		if (str[i] >= 'A' && str[i] <= 'F')
			t = t * base + (10 + str[i] - 'A');
		if (str[i] >= 'a' && str[i] <= 'f')
			t = t * base + (10 + str[i] - 'a');
		i++;
	}
	return (t);
}

int	ft_atoi_base(const char *str, int base)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (ft_strncmp(&str[i], "0x", 2) == 0)
	{
		i += 2;
		if (base != 16)
			return (0);
	}
	return (get_total(&str[i], base) * sign);
}
