/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:05:15 by yaimghar          #+#    #+#             */
/*   Updated: 2025/11/04 10:19:43 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printformat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += printstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += printfdigit(va_arg(ap, int));
	else if (specifier == 'x')
		count += printhexa(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += printaddress(va_arg(ap, void *));
	else if (specifier == 'u')
		count += printunsigned(va_arg(ap, int));
	else if (specifier == 'X')
		count += printhexupp(va_arg(ap, unsigned int));
	else if (specifier == '%')
		count += printchar('%');
	else
		count += printchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (format == NULL)
		return (0);
	count = 0;
  	while (*format)
	{
		if (*format == '%' && format[1])
			count += printformat(*(++format), ap);
		else if (*format == '%' && !format[1])
			break ;
		else
			count += printchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}

int main ()
{
	ft_printf("%d %d", 5);

	char *ptr = "ayoub";
	char dest[9] = ptr;
}