#include "main.h"
/**
 * print_sign - prints sign of a number, fllowd by a new lines
 *@n: number being tested
 * Return: Always (0)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
