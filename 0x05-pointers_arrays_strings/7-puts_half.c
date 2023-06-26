#include "main.h"
#include <stdio.h>
/**
 * puts_half- prints only the last half of a string
 * @str: the string to be printed
 * Return: Success;
*/
void puts_halp(char *str)
{
int n;
int x = 0;
while (str[x] != '\0')
{
x++;
}
if(x % 2 == 1)
{
n = (x - 1) / 2;
}
else
{
n = x / 2;
}
int i = n;
for (; i < x; i++)
{
printf("%c", str[i]);
}


printf("\n");
}
