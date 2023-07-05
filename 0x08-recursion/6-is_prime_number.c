#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - return 1 is prime, 0 if not
 *@n: number to check
 *Return: 0 (Success)
*/

int is_prime_number(int n)
{
return cc(3, n);
}

/**
 *cc - returns a prime number
 *@n: number to check
 *@d: int
 *Return: n
*/

int cc(int d, int n)
{
if (n == 0 || n == 1)
return (0);
else if (d > n /2)
else
return (cc(d + 1, n));
}
