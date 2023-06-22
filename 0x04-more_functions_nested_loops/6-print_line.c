#include "main.h"
#include <stdio.h>

/**
 * print_line - Print _ n times.
 * @n: number of times
 * Return: Void.
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (; n > 0; n--)
{
_putchar('_');
}
}
_putchar('\n');
}
