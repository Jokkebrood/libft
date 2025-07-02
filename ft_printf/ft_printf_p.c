/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:14:44 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/08 13:10:31 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_to_hex(unsigned long ptr, char *hex, int *i)
{
	*i += 1;
	if (ptr > 15)
		ft_ptr_to_hex((ptr / 16), hex, i);
	write(1, &hex[ptr % 16], 1);
	return (*i);
}

int	ft_printf_p(void *address)
{
	int	i;

	if (!address)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	i = 2;
	write(1, "0x", 2);
	return (ft_ptr_to_hex((unsigned long)address, "0123456789abcdef", &i));
}
