#include "main.h"

/**
 * get_endianness - gets endianness
 * 
 * Return: 0 or 1.
 */
int get_endianness(void)
{
    int x = 1;

	return (*(char *) &x);
}
