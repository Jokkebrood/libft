/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:08:06 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/22 11:33:09 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	src_i;
	size_t	dst_i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_i = dst_len;
	src_i = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[src_i] && dst_len + src_i < size - 1)
		{
			dst[dst_i] = src[src_i];
			dst_i++;
			src_i++;
		}
		dst[dst_i] = '\0';
	}
	if (dst_len >= size)
		dst_len = size;
	return (dst_len + src_len);
}
