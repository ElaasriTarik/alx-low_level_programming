#include "main.h"
#include <stdio.h>

/**
 * _memset - fill the n spots of memory with b
 * @b: the value to be fillied with
 * @n: the number of times to fill with 
*/

char *_memset(char *s, char b, unsigned int n)
{
int x = 0;
while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
