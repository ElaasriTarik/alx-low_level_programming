#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 through 9.
 * Return: Always void.
 */
int print_numbers(void)
{
int a;
for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
