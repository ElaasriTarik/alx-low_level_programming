#include "main.h"
/**
 * print_last_digit - return last digit of an integer
 * @n: integer from which to get an absolute value
 * Return: Last digit
*/
int print_last_digit(int n)
{
int x = n % 10;
_putchar(x);
return (x);
}
