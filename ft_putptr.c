/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:37:21 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/30 18:01:42 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	i;

	i = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthex_long((unsigned long)ptr);
	return (i);
}
