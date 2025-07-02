/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:10:28 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/22 15:32:09 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	substr = ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
