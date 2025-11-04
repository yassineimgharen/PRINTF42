/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:37:29 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:18:15 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str != '\0')
	{
		count += printchar(*str);
		str++;
	}
	return (count);
}
