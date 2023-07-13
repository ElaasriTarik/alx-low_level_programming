#include "main.h"
#include <stdlib.h>
#include <stdlib.h>


/**
 * _realloc - function that concats two strings
 * @ptr: prev pointer
 * @old_size: old size
 * @new_size: new size
 * Return: (pointer)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *pp;
unsigned int i = 0;
if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
pp = malloc(new_size);
if (pp == NULL)
return (NULL);

return (pp);
}


if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
{
pp = malloc(new_size);
if (pp == NULL)
return (NULL);

for (; i < old_size && i < new_size ; i++)
{
*((char *)(pp) +i) = *((char *)(ptr) + i);
}
free(ptr);
}

return (pp);
}
