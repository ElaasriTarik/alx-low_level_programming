#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/

void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
printf("%c", *s);
}

}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Alan Walker");
    return (0);
}