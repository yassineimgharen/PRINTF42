#include <stdarg.h>
#include <stdio.h>
#include <string.h>'

#include "printf.h"

int sum(int c,int count, ...);
void print(char *placeholders, ...);

int main() {

    // print("ddfdf", 4.4, 4, 7.2, 21, 6.13);
    // return 0;
    // printf("%d\n", sum(0,4,   12, 4, 54, 6));

    printf("%5d", 5);
}

void print(char *placeholders, ...)
{                         
    int num_args = strlen(placeholders);

    va_list args;
    va_start(args, placeholders);

    int i = 0;
    while (i < num_args)
    {
        if (placeholders[i] == 'd')
        {
            int x = va_arg(args, int);
            printf("%d\n", x);
        }
        else if (placeholders[i] == 'f')
        {
            double x = va_arg(args, double);
            printf("%f\n", x);
        }
        i++;
    }
    va_end(args);
}

int sum(int c, int count, ...) {
    va_list args;
    // int total;
    int i;
    int total;
    va_start(args, count); 
    // total = 0;
    i = 0;
    total = 0;
    while (i < count)
    {
        total += va_arg(args, int);
        i++;
    }
    va_end(args);
    return total;
}



