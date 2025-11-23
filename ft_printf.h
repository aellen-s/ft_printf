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

typedef struct s_flags
{
	int	spec;      // Especificador do tipo: c, s, d, etc.
	int	width;     // Largura do campo
	int	left;      // Alinhamento à esquerda
	int	zero;      // Preenchimento com zeros
	int	star;      // Indicação de * (largura/precisão via argumento)
	int	precision; // Precisão na impressão
	int	hash;      // Flag '#' (exibe 0x em hex, etc.)
	int	space;     // Flag ' ' (espaço extra antes do positivo)
	int	plus;      // Flag '+' (exibe sinal em números positivos)
}		t_flags;

int	ft_putchar(char c);

#endif