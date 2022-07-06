/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:45:55 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/23 14:45:57 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(const char format, va_list ap)
{
	int	flag;
	int	res;

	res = 0;
	flag = ft_flag(format);
	if (flag == 'c')
		res = ft_putchar_fd_int(((char)va_arg (ap, int)), 1) + res;
	else if (flag == 's')
		res = res + ft_string(va_arg(ap, const char *));
	else if (flag == 'i' || flag == 'd')
		res = res + ft_int(va_arg(ap, int));
	else if (flag == 'p')
		res = res + ft_pointer(va_arg(ap, long long));
	else if (flag == 'u')
		res = res + ft_unsigned_decimal(va_arg(ap, unsigned int));
	else if (flag == 'X' || flag == 'x')
		res = res + ft_hex(va_arg(ap, unsigned int), flag);
	else if (flag == '%')
		res = ft_putchar_fd_int('%', 1) + res;
	return (res);
}
