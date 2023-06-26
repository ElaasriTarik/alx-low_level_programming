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
for (int i = 0; i < 1000; i++)
{
if(n[i] == '\0')
break;
x++;
}
return (x);
}
