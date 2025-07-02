/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:40:32 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/08 15:11:20 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_type_va(char str, va_list va)
{
	if (str == '%')
		return (ft_printf_c('%'));
	if (str == 'c')
		return (ft_printf_c(va_arg(va, int)));
	if (str == 'u')
		return (ft_printf_u(va_arg(va, unsigned int)));
	if (str == 's')
		return (ft_printf_s(va_arg(va, char *)));
	if (str == 'd' || str == 'i')
		return (ft_printf_d(va_arg(va, int)));
	if (str == 'x' || str == 'X')
		return (ft_printf_x(va_arg(va, unsigned int), str, 0));
	if (str == 'p')
		return (ft_printf_p(va_arg(va, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		length;
	va_list	va;

	i = 0;
	length = 0;
	va_start(va, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += ft_type_va(str[i], va);
		}
		else
		{
			write(1, &str[i], 1);
			length++;
		}
		i++;
	}
	va_end(va);
	return (length);
}
