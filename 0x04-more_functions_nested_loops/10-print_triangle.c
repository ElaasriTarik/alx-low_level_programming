#include "main.h"

/**
 * print_triangle - Print a triangle.
 * @size : The size of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int x; 
int y;
for (x = 1; x <= size; x++)
{
y = x;
while (y < size)
{
_putchar(' ');
y++;
}
y = 1;
while (y <= x)
{
_putchar('#');
y++;
}
_putchar('\n');
}
}
}
