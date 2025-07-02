/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:12:25 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:54 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*fill(unsigned int n, char *nr, unsigned int digit)
{
	while (n != 0)
	{
		nr[digit] = n % 10 + 48;
		n = n / 10;
		digit--;
	}
	return (nr);
}

int	count(unsigned int n_temp, int nr_len)
{
	while (n_temp != 0)
	{
		n_temp = n_temp / 10;
		nr_len++;
	}
	return (nr_len);
}

int	ft_printf_u(unsigned int n)
{
	int				nr_len;
	unsigned int	n_temp;
	char			*nr;

	nr_len = 0;
	n_temp = n;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	nr_len = count(n_temp, nr_len);
	nr = (char *)malloc((nr_len + 1) * sizeof(char));
	if (!nr)
		return (0);
	nr[nr_len] = '\0';
	write(1, fill(n, nr, nr_len - 1), nr_len);
	free(nr);
	return (nr_len);
}
