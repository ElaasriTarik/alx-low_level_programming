#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 *@b: size of memory to be allocated
 *
 * Return: (SUCCESS)
*/

void *malloc_checked(unsigned int b)
{
void* ptr;
ptr = malloc(b);

return (ptr);

}
