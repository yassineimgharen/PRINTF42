/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:35:30 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:17 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printfdigit(int nb)
{
	int		count;
	long	n;

	n = nb;
	count = 0;
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		count += printfdigit(n / 10);
	count += printchar('0' + (n % 10));
	return (count);
}
