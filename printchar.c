/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:38:25 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:08 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(char c)
{
	int	count;

	count = 0;
	if (c == 0)
	{
		write(1, "\0", 1);
		count = 1;
		return (count);
	}
	count += write(1, &c, 1);
	return (count);
}
