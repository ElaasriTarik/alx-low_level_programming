#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - return an array of certain amount pointers
 *@nmemb: element of the array
 *@size: size of each element
 * Return: (success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *pp;
int x;
if (nmemb == 0 || size == 0)
return (NULL);

pp = malloc(nmemb * size);
if (pp == NULL)
return (NULL);
x = 0;
while (x < (nmemb * size))
{
*((char *)(pp) + x) = 0;
x++;
}

return (pp);
}
