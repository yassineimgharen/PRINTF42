/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 21:34:27 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:32 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printhexa(unsigned long nb)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
		count += printhexa(nb / 16);
	count += printchar(symbols[nb % 16]);
	return (count);
}
