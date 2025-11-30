/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:16:24 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/30 17:15:55 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char format)
{
	int		i;
	char	*digits;

	i = 0;
	if (format == 'x')
		digits = "0123456789abcdef";
	else if (format == 'X')
		digits = "0123456789ABCDEF";
	if (n >= 16)
		i += ft_puthex(n / 16, format);
	i += ft_putchar(digits[n % 16]);
	return (i);
}
