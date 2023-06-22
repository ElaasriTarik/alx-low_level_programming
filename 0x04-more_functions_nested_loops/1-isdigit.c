#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if d is a digit.
 * @d: a character
 * Return: Always 0.
 */
int _isdigit(int d)
{
if (d >= 48 && d <= 57)
return (1);
else
return (0);
}
