/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:26:09 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/22 11:56:20 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	char_c;

	i = 0;
	char_c = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == char_c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == char_c)
		return ((char *)s + i);
	return (NULL);
}
