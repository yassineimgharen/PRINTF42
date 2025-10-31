/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:35:30 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 09:36:15 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printfdigit(long  nb, int base)
{
	int count = 0;

	char *symbols = "0123456789abcdef";

	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base)
		count += printfdigit((nb / base), base);
	count += printchar(symbols[nb % base]); 
	return count;
}