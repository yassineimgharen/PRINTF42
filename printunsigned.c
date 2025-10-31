/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 09:36:36 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 09:53:51 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	printunsigned(int nbr)
{
	int	count;

	count = 0;
	unsigned int usn = (unsigned int) nbr;
	count += printfdigit(usn, 10);

    return (count);
}