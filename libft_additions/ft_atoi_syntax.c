/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_syntax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:18:18 by jade-vla          #+#    #+#             */
/*   Updated: 2025/07/03 16:12:51 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_syntax(const char *str)
{
	int		i;
	long	len_check;

	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	if (ft_strlen(str + i) > 10)
		return (1);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (1);
		i++;
	}
	len_check = ft_atol(str);
	if (len_check < -2147483648 || len_check > 2147483647)
		return (1);
	return (0);
}
