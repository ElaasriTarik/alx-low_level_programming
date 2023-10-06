#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *@ht: hash table
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr, *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

for (; i < ht->size; i++)
{
curr = ht->array[i];
while (curr != NULL)
{
temp = curr;
					curr = curr->next;
					free_item(temp);
				}
		}
	free(ht->array);
	free(ht);
}

/**
 * free_item - frees a node
 *@item: node to be freed
*/

void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
