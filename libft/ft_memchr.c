/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:46:06 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/22 11:57:18 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		c_char;
	unsigned char		*s_uc;

	i = 0;
	c_char = (unsigned char )c;
	s_uc = (unsigned char *)s;
	while (i < n)
	{
		if (s_uc[i] == c_char)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
