#include "main.h"
#include <stdio.h>
/**
 * print_number -  prints a number
 * @n: number to be printed
 * Return: Success.
 */
void print_number(int n);
{
unsigned int sign;
if (n < 0)
{
_putchar('-');
n *= -1;
}
sign = n;
if (sign / 10)
{
print_number(sign / 10);
}
_putchar(sign % 10 + '0');
}
