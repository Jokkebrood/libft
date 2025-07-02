/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:54:37 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/29 12:32:23 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	trim_len_start(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (i);
		i++;
	}
	return (i);
}

size_t	trim_len_end(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	while (i > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i - 1] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			return (ft_strlen(s1) - i);
		i--;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*strtrimmed;
	size_t	start;
	size_t	end;
	size_t	strtrimmed_len;

	if (!set)
		return ((char *)s1);
	if (s1[0] == '\0')
		return (ft_strdup(s1));
	start = trim_len_start(s1, set);
	if (start == ft_strlen(s1))
	{
		strtrimmed = (char *)malloc(1 * sizeof(char));
		strtrimmed[0] = '\0';
		return (strtrimmed);
	}
	end = trim_len_end(s1, set);
	strtrimmed_len = ft_strlen(s1) - start - end;
	strtrimmed = (char *)malloc(strtrimmed_len + 1 * sizeof(char));
	if (strtrimmed == NULL)
		return (NULL);
	ft_memcpy(strtrimmed, s1 + start, strtrimmed_len);
	strtrimmed[strtrimmed_len] = '\0';
	return (strtrimmed);
}
