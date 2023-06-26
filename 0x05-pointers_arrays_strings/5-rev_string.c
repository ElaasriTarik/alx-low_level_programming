#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: Success;
*/
void rev_string(char *s)
{
int i = 0;
int x = 0;
while (s[i] != '\0')
{
x++;
i++;
}
x--;
while (x >= 0)
{
_putchar(s[x]);
x--;
}
_putchar('\n');
}
