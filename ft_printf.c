/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaimghar <yaimghar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:05:15 by yaimghar          #+#    #+#             */
/*   Updated: 2025/10/31 10:09:01 by yaimghar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printformat(char specifier, va_list ap)
{
	int count = 0;

	if (specifier == 'c')
		count +=  printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += printstr(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += printfdigit(va_arg(ap, long), 10);
	else if (specifier == 'x')
		count += printfdigit(va_arg(ap, long), 16);
	else if (specifier == 'p')
		count += printaddress(va_arg(ap, long));
	else if (specifier == 'u')
		count += printunsigned(va_arg(ap, int));
	else if (specifier == 'X')
		count += printhexupp(va_arg(ap, int));
	else if (specifier == '%%')
		count += printhexupp(va_arg(ap, int));
	return count;
}
	
int myprintf(const char *str, ...)
{
	va_list ap;
	int count = 0;

	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			count += printformat(*(++str), ap); 
		else
			count += printchar(*str);
		str++;   
	}
	va_end(ap); 
	return count;
}

int main ()
{
	int count = 0;
	int count2= 0;
	// int i = 42;
	// count = myprintf("yassine %x\n", i);
	// printf("%d\n", count);

	// count = myprintf("%s %p\n", "yassinsse", &i);
	// myprintf("%d\n", count);

	// count2 = printf("%s %p\n", "yassinsse", &i);
	// printf("%d\n", count2);
	// return 0;
	
	// printf("%u\n", 2147483649);
	myprintf("%X\n",  42);
}