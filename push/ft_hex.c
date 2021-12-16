/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:11:05 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/20 15:41:49 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sizer(unsigned long nbr)
{
	int	len;

	len = 1;
	while (nbr >= 16)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

int	ft_hex(unsigned int nbr, char c)
{
	int	len;

	len = sizer(nbr);
	if (c == 'x')
		ft_putnbr_pointer(nbr, 1);
	else if (c == 'X')
		ft_putnbr_pointer_x(nbr, 1);
	return (len);
}
