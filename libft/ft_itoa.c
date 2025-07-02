/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:09:47 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/30 14:58:18 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fill(int n, char *nr, int digit)
{
	if (n == -2147483648)
	{
		nr[1] = '2';
		n = -147483648;
	}
	if (n < 0)
	{
		n = -n;
		nr[0] = '-';
	}
	while (n != 0)
	{
		nr[digit] = n % 10 + 48;
		n = n / 10;
		digit--;
	}
	return (nr);
}

int	count_len(int n_temp, int nr_len)
{
	if (n_temp == -2147483648)
	{
		n_temp = -147483648;
		nr_len++;
	}
	if (n_temp < 0)
	{
		n_temp = -n_temp;
		nr_len++;
	}
	while (n_temp != 0)
	{
		n_temp = n_temp / 10;
		nr_len++;
	}
	return (nr_len);
}

char	*ft_itoa(int n)
{
	int		nr_len;
	int		n_temp;
	char	*nr;

	nr_len = 0;
	n_temp = n;
	if (n == 0)
	{
		nr = (char *)malloc(2 * sizeof(char));
		if (!nr)
			return (nr);
		nr[0] = '0';
		nr[1] = '\0';
		return (nr);
	}
	nr_len = count_len(n_temp, nr_len);
	nr = (char *)malloc((nr_len + 1) * sizeof(char));
	if (!nr)
		return (NULL);
	nr[nr_len] = '\0';
	ft_fill(n, nr, nr_len - 1);
	return (nr);
}
