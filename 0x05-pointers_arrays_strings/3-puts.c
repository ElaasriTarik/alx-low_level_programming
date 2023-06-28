#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: the string to be printed
 * Return: Success;
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
}
printf("\n");
}
