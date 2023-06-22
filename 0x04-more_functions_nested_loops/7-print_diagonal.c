#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print a diagonal .
 * @n : The number of '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
int x;
int sp;

for (x = 0; x < n; x++)
{
sp = 0;
while (sp < x)
{
_putchar(' ');
sp++;
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
{
_putchar('\n');
}
}
