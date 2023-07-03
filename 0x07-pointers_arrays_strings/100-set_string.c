#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to another pointer
 * @s: string
 * @to: the destination
 * Return: *s
*/

void set_string(char **s, char *to)
{
*s = to;
}
