/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:56:06 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/03 13:29:25 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int	printstr(char *str);
int	printfdigit(int nb);
int	ft_strlen(char *str);
int	printhexupp(unsigned int nb);
int	printaddress(void *str);
int	printchar(char c);
int	printunsigned(int nbr);
int	printhexa(unsigned long nb);
int	ft_printf(const char *format, ...);

#endif