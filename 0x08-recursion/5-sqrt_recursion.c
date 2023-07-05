#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - main function, returns square root
 * @n: int n
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
return (_get_sqr(n, 1));
}


/**
 * _get_sqr - called up by _sqrt_recursion
 * @n: int
 * @i: int
 * Return: sqrt
 */
int _get_sqr(int n, int x)
{
if (n < 0)
return (-1);
if ((x * x) > n)
return (-1);
if (x * x == n)
return (x);
return (_get_sqr(n, x + 1));
}
