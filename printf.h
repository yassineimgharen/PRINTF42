#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

void    ft_putstr(char *s);
int printstr(char *str);
int printfdigit(long  nb, int base);
int ft_strlen(char *str);
int printhexupp(long  nb);
int printaddress(long nbr);
int printchar(char c);
int	printunsigned(int nbr);

#endif