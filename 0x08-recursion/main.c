#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (0);
if (y > 1)
return (x * _pow_recursion(x, y - 1));
}


int main(void)
{
    int n;

    n = _pow_recursion(9, 8);
    printf("%d\n", n);
    return (0);
}