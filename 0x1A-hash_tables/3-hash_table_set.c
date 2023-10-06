#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - sets the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: returns 1 if succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *to_add, *current;
	unsigned long int index;


	if (ht == NULL || strlen(key) == 0 || strlen(value) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
		{
			if (strcmp(current->key, key) == 0)
				{
					free(current->value);
					current->value = strdup(value);
					if (current->value == NULL)
						{
							return (0);
						}
					return (1);
				}
			current = current->next;
		}

	to_add = malloc(sizeof(hash_node_t));
    if (to_add == NULL)
		{
			return (0);
		}
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
