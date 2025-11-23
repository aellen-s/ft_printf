/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aellen-s <aellen-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:59:58 by aellen-s          #+#    #+#             */
/*   Updated: 2025/11/23 18:34:51 by aellen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	ft_flags_init(void) // Função para inicializar struct de flags
{
	t_flags	flags;

	flags.spec = 0;       // Tipo de especificador
	flags.width = 0;      // Largura mínima do campo
	flags.left = 0;       // Flag para alinhamento à esquerda (-)
	flags.zero = 0;       // Flag para preenchimento com zeros (0)
	flags.star = 0;       // Flag indicando uso de * na largura
	flags.precision = -1; // Precisão (-1 = não definida)
	flags.hash = 0;       // Flag para uso de # (prefixos hex/oct)
	flags.space = 0;      // Flag para espaço antes de números positivos
	flags.plus = 0;       // Flag para sinal "+" antes de números positivos
	return (flags);       // Retorna struct preparada para uso
}

