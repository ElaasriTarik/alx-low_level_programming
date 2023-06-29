#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: the string to be printed
 * Return: Success;
*/
void puts2(char *str)
{
int i = 0;
int x = 0;
while (str[x] != '\0')
{
x++;
}
x--;
while (i <= x)
{
printf("%c", str[i]);
i += 2;
}
printf("\n");
}
