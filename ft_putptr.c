/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 19:37:21 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/29 19:42:49 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (ft_putstr("0x") + ft_puthex_unsigned(str));
}