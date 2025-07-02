/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:46:09 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/29 13:31:20 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	pos_or_neg;
	int	str_int;

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
/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    printf("Overflowed result: %d\n", ft_atoi("-92233720368547758070"));
    printf("Overflowed result: %d\n", atoi("-92233720368547758070"));
    return 0;
}
*/
