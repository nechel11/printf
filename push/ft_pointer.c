/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:46:02 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/20 16:28:42 by nbyrd            ###   ########.fr       */
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

int	ft_pointer(long long nbr)
{
	int	len;

	ft_putstr_fd("0x", 1);
	len = sizer(nbr) + 2 ;
	ft_putnbr_pointer(nbr, 1);
	return (len);
}
