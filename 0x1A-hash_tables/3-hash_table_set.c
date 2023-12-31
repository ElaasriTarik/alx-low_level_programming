#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - sets the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: returns 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *to_add, *curr;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0 || strlen(value) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
curr = ht->array[index];
while (curr != NULL)
{
if (strcmp(curr->key, key) == 0)
{
free(curr->value);
					curr->value = strdup(value);
					if (curr->value == NULL)
						return (0);
					return (1);
				}
			curr = curr->next;
		}
	to_add = malloc(sizeof(hash_node_t));
if (to_add == NULL)
return (0);
	to_add->key = strdup(key);
to_add->value = strdup(value);
if (to_add->key == NULL || to_add->value == NULL)
{
free(to_add->key);
			free(to_add->value);
			free(to_add);
			return (0);
}
	to_add->next = ht->array[index];
	ht->array[index] = to_add;
	return (1);
}
