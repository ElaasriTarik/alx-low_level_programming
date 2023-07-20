#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints all strings
 * @n: number of args
 * @separator: the seprator between each number
 * Return: (Success)
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;
va_start(args, n);
for (; a < n; a++)
{
char *x = va_arg(args, char *);
if (x == NULL)
printf("(nil)");
else
printf("%s", x);
if ((a < n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
