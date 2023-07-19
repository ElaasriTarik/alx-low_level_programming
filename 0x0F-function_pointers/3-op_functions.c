#include <stdio.h>
#include "3-calc.h"


/**
 * op_add - adds a and b
 * @a: int
 * @b: int
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - subs a and b
 * @a: int
 * @b: int
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplies a with b
 * @a: int
 * @b: int
*/

int op_mul(int a, int b)
{
return (a *b);
}

/**
 * op_div - devides a by b
 * @a: int
 * @b: int
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - eturns the remainder
 * @a: int
 * @b: int
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
