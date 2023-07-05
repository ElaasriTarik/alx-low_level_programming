#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - return a power of a number to the y
 *@x: int to power
 *@y: int to power with
 *Return: 0 (Success)
*/

int _pow_recursion(int x, int y)
{
if (y <= 0)
return (y);
if (y > 1)
return (x * _pow_recursion(x, y - 1));
}
