#include "main.h"
#include <stdio.h>

/**
 * print_line - Print line dependent on the integer n.
 * @n : The number of '_' characters to use
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
