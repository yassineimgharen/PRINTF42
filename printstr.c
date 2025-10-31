/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:37:29 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 09:37:47 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int  printstr(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count += printchar(*str);
		str++;
	}
	return count;
}