/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexupp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:24:27 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 09:59:20 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printhexupp(long  nb)
{
	int count = 0;

	char *symbols = "0123456789ABCDEF";

	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 16)
		count += printfdigit((nb / 16), 16);
	count += printchar(symbols[nb % 16]); 
	return count;
}