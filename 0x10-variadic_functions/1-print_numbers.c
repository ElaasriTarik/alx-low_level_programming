#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function to sum all args
 * @n: number of args
 * @separator: the seprator between each number
 * Return: (Success)
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;
va_start(args, n);
for (; a < n; a++)
{
int x = va_arg(args, int);
printf("%d", x);
if ((a < n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
}
