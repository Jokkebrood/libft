/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:16:17 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/29 11:30:49 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	in_word;
	size_t	i;

	count = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
		}
		else
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

char	*fill_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_initdata(size_t *i, size_t *j, size_t *start)
{
	*i = 0;
	*j = 0;
	*start = (size_t) - 1;
}

char	**ft_free(char **str, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	ft_initdata(&i, &j, &start);
	split = ft_calloc((word_count(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start == (size_t) - 1)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start != (size_t) - 1)
		{
			split[j] = fill_word(s + start, c);
			if (!split[j++])
				return (ft_free(split, j - 1));
			start = (size_t) - 1;
		}
		i++;
	}
	return (split);
}
