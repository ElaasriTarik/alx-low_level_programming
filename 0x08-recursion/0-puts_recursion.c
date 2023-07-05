#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

int i = 0;
void _puts_recursion(char *s)
{

if (s[i] == '\0')
{
printf("\n");
}
else
{
printf("%c", s[i]);
i++;
_puts_recursion(s);
}
}
