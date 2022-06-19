/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tairribe <tairribe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:17:38 by tairribe          #+#    #+#             */
/*   Updated: 2022/06/19 15:28:31 by tairribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	i;

	i = 1;
	while (n > 9 || n < -9)
	{
		i++;
		n = n / 10;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str_nb;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	size = get_size(n);
	str_nb = ft_calloc(size + 1, sizeof(char));
	if (n < 0)
	{
		str_nb[0] = '-';
		n = n * -1;
	}
	size--;
	while (n)
	{
		str_nb[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (str_nb);
}
