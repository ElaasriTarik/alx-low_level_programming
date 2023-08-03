#include "main.h"

/**
 * get_bit - gets bit at a certain index
 *@index: index
 * Return: (Success)
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 32)
return (-1);

return ((n >> index) & 1);
}
