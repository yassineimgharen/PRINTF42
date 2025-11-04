/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printaddress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:34:45 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:21 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printaddress(void *str)
{
	int				count;
	unsigned long	address;

	count = 0;
	if (str == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)str;
	count = 2;
	printstr("0x");
	count += printhexa(address);
	return (count);
}
