/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:17:13 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/28 15:30:57 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_cpy;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	s_cpy = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_cpy)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_cpy[i] = (*f)(i, s[i]);
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
