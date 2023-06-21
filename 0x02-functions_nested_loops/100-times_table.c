#include "main.h"
/**
 * print_times_table - print the n table begin with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int i, y, z;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (y = 0; y <= n; y++)
{
z = y * i;
if (y == 0)
{
_putchar(z + '0');
}
else if (z < 10 && y != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
else if (z >= 10 && z < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
else if (z >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((z / 100) + '0');
_putchar(((z / 10) % 10) + '0');
_putchar((z % 10) + '0');
}
}
_putchar('\n');
}
}
}
