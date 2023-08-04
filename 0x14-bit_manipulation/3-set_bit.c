#include "main.h"

/**
 * set_bit - gets bit at a certain index
 *@index: index
 *@n: value
 * Return: (Success)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 64)
return (-1);

return (*n |= (1 << index));
}
