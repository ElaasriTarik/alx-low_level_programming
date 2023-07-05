#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

int _sqrt_recursion(int n)
{
    int x = n;
    int y = 1;
if (x - y > 0)
{
        x = (x + y) / 2;
        y = n / x;
}
return x;
}


int main(void)
{
    int n;

    n = _sqrt_recursion(16);
    printf("%d\n", n);
    return (0);
}