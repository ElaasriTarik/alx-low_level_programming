#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints the k=length of a string
 *@s: string to be printed
*/

int _strlen_recursion(char *s)
{
if (*s)
return (_strlen_recursion(s + 1) + 1);

}
