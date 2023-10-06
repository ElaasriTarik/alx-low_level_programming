#include "hash_tables.h"

/**
 * hash_table_get - gets a value using a key.
 * @ht: hash table
 * @key: key to look with
 * Return: value found, or  NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *item;
unsigned long int x;

if (ht == NULL || key == NULL)
	return (NULL);
x = key_index((const unsigned char *) key, ht->size);
item = ht->array[x];

for (; item != NULL; item = item->next)
{
	if (strcmp(item->key, key) == 0)
		return (item->value);
}

return (NULL);
}
