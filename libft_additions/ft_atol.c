/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:39:55 by jade-vla          #+#    #+#             */
/*   Updated: 2025/07/03 11:44:44 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atol(const char *str)
{
	int		i;
	int		pos_or_neg;
	long	str_int;

	i = 0;
	str_int = 0;
	pos_or_neg = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos_or_neg++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		str_int = str_int * 10;
		str_int += str[i] - 48;
		i++;
	}
	if (pos_or_neg == 1)
		str_int = -str_int;
	return (str_int);
}
