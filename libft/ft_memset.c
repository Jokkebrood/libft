/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:16:38 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/15 15:50:54 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*filled_s;

	filled_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		filled_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
