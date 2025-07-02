/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:15:13 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/17 14:00:31 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*dest_cpy;
	const char		*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (const char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
