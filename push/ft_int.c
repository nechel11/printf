/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:00:10 by nbyrd             #+#    #+#             */
/*   Updated: 2021/11/22 18:50:42 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	sizer(int nbr)
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

int	ft_int(int nbr)
{
	int	res;

	if (nbr == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		res = ft_strlen("-2147483648");
		return (res);
	}
	if (nbr < 0)
	{
		res = 1;
		nbr = nbr * -1;
		ft_putchar_fd('-', 1);
	}
	else
		res = 0;
	ft_putnbr_fd(nbr, 1);
	return (sizer(nbr) + res);
}
