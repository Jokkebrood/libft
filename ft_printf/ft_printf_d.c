/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:21:22 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/08 15:20:24 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_printf_d(int i)
{
	char	*s;
	int		s_len;

	if (!i && i != 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	s = ft_itoa(i);
	s_len = ft_strlen(s);
	write(1, s, s_len);
	free(s);
	return (s_len);
}
