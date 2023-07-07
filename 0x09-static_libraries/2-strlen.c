#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the size of a string
 * @n: the string to test
 * Return: Success;
*/
int _strlen(char *n)
{
int x = 0;
int i = 0;
while (n[i] != '\0')
{
x++;
i++;
}
return (x);
}
