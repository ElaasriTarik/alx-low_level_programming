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
int space;
for (int x = 0; x < n; x++)
{
for (space = 0; space < x; space++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
if (n <= 0)
{
_putchar('\n');
}
}
