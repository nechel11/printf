/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:34:51 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/23 14:34:39 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		counter;
	int		counter1;
	va_list	ap;

	i = 0;
	counter = 0;
	counter1 = 0;
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
			counter += ft_parse(format[++i], ap);
		else
			counter1 = ft_putchar_fd_int(format[i], 1) + counter1;
		if (!format[i])
			break ;
		i++;
	}
	va_end(ap);
	return (counter + counter1);
}
