/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:32:31 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/29 18:36:43 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_long(unsigned long n)
{
	int	i;
	char	*digits;

	i = 0;
	digits = "0123456789abcdef";
	if (n >= 16)
		i += ft_puthex_long(n / 16);
	i += ft_putchar(digits[n % 16]);
	return (i);
}