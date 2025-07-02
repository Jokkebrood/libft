/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-vla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:30:09 by jade-vla          #+#    #+#             */
/*   Updated: 2024/11/08 13:32:43 by jade-vla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_printf_c(int c);
int	ft_printf_u(unsigned int n);
int	ft_printf_s(char *s);
int	ft_printf_d(int i);
int	ft_printf_x(unsigned int nr, char up_low, int i);
int	ft_printf_p(void *address);

#endif
