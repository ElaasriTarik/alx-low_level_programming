#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print a diagonal .
 * @n : The number of '\' characters to use
 * Return: Void.
 */
void main(int n)
{
int n;
int space;
for (int x = 0; x < n; x++)
{
for (space = 0; space < n; space++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
putchar('\n');
}
