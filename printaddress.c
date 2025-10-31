/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printaddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:34:45 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 09:35:07 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printaddress(long nbr)
{
	int count = 2;
	ft_putstr("0x");
	count += printfdigit(nbr, 16);

	return (count);
}