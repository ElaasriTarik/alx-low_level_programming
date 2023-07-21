#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints all strings
 * @format: format of passed arg
 * Return: (Success)
 *
*/
void print_all(const char * const format, ...)
{
va_list args;

unsigned int i = 0;
char *string, *bt = "";
va_start(args, format);

if (format)
{
    while (format[i])
    {
        switch (format[i])
        {
        case 'i':
            printf("%s%d", bt, va_arg(args, int));
            break;
        case 'c':
            printf("%s%c", bt, va_arg(args, int));
            break;
        case 'f':
            printf("%s%f", bt, va_arg(args, double));
            break;
        case 's':
            string = va_arg(args, char *);
            if (string == NULL)
            string = "(nil)";

            printf("%s%s", bt, string);
            break;
            default:
            i++;
            continue;
        }
        bt = ", ";
        i++;
    }
    
}
printf("\n");
}
