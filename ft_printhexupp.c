/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexupp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:24:27 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:30 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printhexupp(unsigned int nb)
{
	int		count;
	char	*symbols;

	count = 0;
	symbols = "0123456789ABCDEF";
	if (nb >= 16)
		count += printhexupp(nb / 16);
	count += printchar(symbols[nb % 16]);
	return (count);
}
