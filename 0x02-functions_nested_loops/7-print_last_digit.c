#include "main.h"
/**
 * print_last_digit - return last digit of an integer
 * @n: integer from which to get an absolute value
 * Return: Last digit
*/
int print_last_digit(int n)
{
int abs;
if (n < 0)
n = -n;
abs = n % 10;
if (abs < 0)
abs = -abs;
_putchar(abs + '0');
return (abs);
}
