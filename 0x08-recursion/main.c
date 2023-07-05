#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

int _strlen_recursion(char *s)
{
//int i = 0;
if (*s)
{
return (_strlen_recursion(s + 1) + 1);
}
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}