#include "main.h"
#include <stdio.h>

/**
 * print_square - Print a square.
 * @size : The number of '#' characters to use
 * Return: Void.
 */
void print_square(int size)
{
int x;
int sp;

for (x = 0; x < size; x++)
{
sp = 0;
while (sp < size)
{
_putchar('#');
sp++;
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
