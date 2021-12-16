/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:36:29 by zafar             #+#    #+#             */
/*   Updated: 2021/11/23 14:40:22 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

char	*ft_itoa(int n);
int		ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
int		ft_parse(const char format, va_list ap);
int		ft_flag(char c);
int		ft_printf(const char *format, ...);
int		ft_int(int ap);
int		ft_string(const char *str);
int		ft_pointer(long long nbr);
int		ft_unsigned_decimal(unsigned int nbr);
int		ft_hex(unsigned int nbr, char c);
void	ft_putnbr_fd(long long n, int fd);
void	ft_putnbr_pointer(unsigned long n, int fd);
void	ft_putnbr_pointer_x(long long n, int fd);
int		ft_hex(unsigned int nbr, char c);
int		ft_putchar_fd_int(char c, int fd);
#endif
