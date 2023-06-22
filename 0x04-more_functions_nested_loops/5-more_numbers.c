#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Void.
 */
void more_numbers(void)
{
int x, y;

for (x = 0; x <= 10; x++)
{
y = 0;
for (; y <= 14; y++)
{
if (y >= 10)
_putchar(y / 10 + '0');
else
_putchar(y % 10 + '0');

_putchar('\n');
}

}
