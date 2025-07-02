/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:52:52 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/22 11:27:17 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	c_char;

	s_len = ft_strlen(s);
	c_char = (char)c;
	if (c_char == s[s_len])
		return ((char *)s + s_len);
	while (s_len >= 0)
	{
		if (c_char == s[s_len])
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
