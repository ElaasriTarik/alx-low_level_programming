#include <stdio.h>
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
if (x < 0)
{
putchar('-');
print_val(-x);
}
else if (x >= 0 && x < 10)
{
putchar(x + '0');
}
else
print_val(x);
if ((a < n -1) && separator != NULL)
{
putchar(*separator);
putchar(' ');
}
}
putchar('\n');
}
/**
 * print_val - prints values
 * @d: digit to be printed
 * Return: (Success)
 *
*/
void print_val(int d) {
   if(d != 0) {
      print_val(d/10);
      putchar((d%10) + '0');
   }
}
