#include "main.h"
#include <stdio.h>
/**
 * factorial - return a factorial of a given number n
 *@n: sto factorize
 *Return: 0 (Success)
*/

int factorial(int n)
{
if (n == 1)
return (1);
else
return (n * factorial(n - 1));
}
