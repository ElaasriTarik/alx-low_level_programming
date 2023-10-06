#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: the hash table (Success)
*/


hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));

table->size = size;

if (table == NULL)
{
free(table);
return (NULL);
}

return (table);
}
