#include <stdio.h>
#include "variadic_functions.h"


/**
 * int sum_them_all - a function to sum all args
 * @n: number of args
 * 
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;
int sum = 0;
if (n == 0)
return (0);

va_start(args, n);
for (; a < n; a++)
{
int x = va_arg(args, int);
sum += x;
}

return (sum);
}
