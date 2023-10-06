#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	short int comma = 0;

if (ht == NULL)
return;

for (; i < ht->size; i++)
{
if (i == 0)
printf("{");

node = ht->array[i];
while (node != NULL)
{
if (comma == 1)
printf(", ");

					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					if (comma == 0)
						comma = 1;
				}
		}
	printf("}\n");
}
