#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 through 9.
 * Return: Always void.
 */
int print_numbers(void)
{
int a = 0;
for (; a <= 9; a++)
{
_putchar(48 + a);
}
_putchar('\n');
}
