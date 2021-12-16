/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_decimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:02:17 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/20 14:47:01 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sizer(unsigned long nbr)
{
	int	len;

	len = 1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

int	ft_unsigned_decimal(unsigned int	nbr)
{
	int	len;

	len = sizer(nbr);
	ft_putnbr_fd(nbr, 1);
	return (len);
}
