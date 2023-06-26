#include "main.h"
#include <stdio.h>
/**
 * print_rev- prints a string in reverse
 * @s: the string to be printed
 * Return: Success;
*/
void print_rev(char *s)
{
int i = 0;
int x = 0;
while (s[i] != '\0')
{
x++;
i++;
}
int l = 0;
while (x >= 0)
{
printf("%c", s[x]);
x--;
}
printf("\n");
}
