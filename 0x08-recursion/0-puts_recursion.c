#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
printf("%c", *s);
_puts_recursion(s + 1);
}
}
