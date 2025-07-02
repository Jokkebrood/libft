/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:27:39 by jade-vla          #+#    #+#             */
/*   Updated: 2024/10/28 15:27:21 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	the_ifs(int n, int n_temp, int fd)
{
	if (n == 0)
	{
		write(fd, "0", 1);
		return (0);
	}
	if (n_temp == -2147483648)
	{
		write(fd, "-2", 2);
		n_temp = 147483648;
	}
	if (n_temp < 0)
	{
		n_temp = -n_temp;
		write(fd, "-", 1);
	}
	return (n_temp);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		n_temp;
	int		n_len;
	char	n_to_c[12];

	n_temp = n;
	n_len = 0;
	n_temp = the_ifs(n, n_temp, fd);
	while (n_temp != 0)
	{
		n_to_c[n_len] = n_temp % 10 + 48;
		n_temp = n_temp / 10;
		n_len++;
	}
	while (n_len > 0)
		write (fd, &n_to_c[--n_len], 1);
}
