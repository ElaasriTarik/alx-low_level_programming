#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
int x, y, val;

for (x = 0; x < 10; x++)
{
y = 0;
for (; y < 15; y++)
{
if (y >= 10)
{
val = y % 10;
putchar('1');
}
else
{
val = y;
}
putchar(val + '0');
}
putchar('\n');
}
}
