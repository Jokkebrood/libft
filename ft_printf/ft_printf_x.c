/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:10:59 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/15 11:40:06 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_to_hex(unsigned int nr, char *hex, int *i)
{
	if (!nr && nr != 0)
		return (write(1, "(nil)", 5));
	*i += 1;
	if (nr > 15)
		ft_convert_to_hex((nr / 16), hex, i);
	write(1, &hex[nr % 16], 1);
	return (*i);
}

int	ft_printf_x(unsigned int nr, char up_low, int i)
{
	if (up_low == 'x')
		return (ft_convert_to_hex(nr, "0123456789abcdef", &i));
	else
		return (ft_convert_to_hex(nr, "0123456789ABCDEF", &i));
}
