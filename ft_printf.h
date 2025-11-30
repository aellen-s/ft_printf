/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 19:16:11 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/17 18:53:26 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(const char *str);
int	ft_puthex(unsigned int n, char format);
int	ft_puthex_long(unsigned long n);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_putptr(void *str);

int	ft_printf(const char *format, ...);

#endif