#include "main.h"

/**
 * clear_bit - clears a bit at a certain index
 *@index: index
 *@n: value
 * Return: (Success)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int curr;
if (index > 64)
return (-1);

curr = ~(1 << index);
*n &= curr;
return (1);
}
