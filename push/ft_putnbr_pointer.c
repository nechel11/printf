/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:56:39 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/20 16:42:50 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pointer(unsigned long n, int fd)
{
	if (n > 15)
		ft_putnbr_pointer(n / 16, fd);
	if (n % 16 < 10)
		ft_putchar_fd(n % 16 + '0', fd);
	else
		ft_putchar_fd(n % 16 + 'a' - 10, fd);
}

void	ft_putnbr_pointer_x(long long n, int fd)
{
	if (n > 15)
		ft_putnbr_pointer_x(n / 16, fd);
	if (n % 16 < 10)
		ft_putchar_fd(n % 16 + '0', fd);
	else
		ft_putchar_fd(n % 16 + 'A' - 10, fd);
}
