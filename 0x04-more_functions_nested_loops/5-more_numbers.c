#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers from 0 to 14, 10 times.
 *
 * Return: Void.
 */
void more_numbers(void)
{
int x;

for (x = 0; x <= 10; x++)
{
for (int i = 0; i <= 14; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
_putchar('\n');
}
