#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

int factorial(int n)
{
//int i = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
else
return (n * factorial(n - 1));
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = factorial(-98);
    printf("%d\n", n);
    return (0);
}