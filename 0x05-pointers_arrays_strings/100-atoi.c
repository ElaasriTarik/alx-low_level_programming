#include "main.h"
#include <stdio.h>
/**
 * _atoi- conveerts a number to an integer
 * @s: the string to be converted
 * Return: Success;
*/
int _atoi(char *s)
{
int x = 0;
while (s[x] != '\0')
{
if (s[x] == 45)
{
if (s[x + 1] >= 48 && s[x + 1] <= 57)
{
return('-');
x++;
return(s[x]);
}
}
else if (s[x] >= 48 && s[x] <= 57)
{
putchar(s[x]);
}
x++;
}
return ('\n');
}
