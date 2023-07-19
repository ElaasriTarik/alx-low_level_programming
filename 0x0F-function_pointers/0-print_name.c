#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *@name: name
 *@f: function to call
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
