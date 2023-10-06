#include "hash_tables.h"
#include <string.h>
/**
 * key_index - return the index of a key
 * @key: key
 * @size: size of table
 * Return: index of a key
*/


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key) % size;

	return (hash);
}
