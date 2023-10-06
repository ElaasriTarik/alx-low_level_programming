#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 * Return: the hash table (Success)
*/


hash_table_t *hash_table_create(unsigned long int size)
{
  hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
  unsigned long int x = 0;
  if (table == NULL)
    return (NULL);
  table->size = size;

  table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

  if (table == NULL || table->array == NULL)
    return (NULL);
  for (; x < size; x++)
    {
      table->array[x] = NULL;
    }

  return (table);
}
