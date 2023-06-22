#include "main.h"
#include <stdio.h>

/**
 * print_number - Print a number int .
 * @n : as an integer
 * Return: Void.
 */
void print_number(int n)
{
unsigned int b = 0;
if (n < 0)
b = -n;
_putchar('-');
else
b = n;
if (b / 10)
{
print_number(n1 / 10);
}
_putchar((b % 10)+ '0');
}
