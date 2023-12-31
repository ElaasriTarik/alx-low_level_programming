#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
hash_table_t *ht;
    char *key1 = "hetairas";
    char *value1 = "Alice";
    char *key2 = "mentioner";
    char *value2 = "30";
    char *key3 = "city";
    char *value3 = "New York";

    ht = hash_table_create(1024);

    if (ht == NULL)
    {
        fprintf(stderr, "Failed to create hash table\n");
        return (EXIT_FAILURE);
    }

    if (hash_table_set(ht, key1, value1) == 0)
    {
        fprintf(stderr, "Failed to add key1 to hash table\n");
        return (EXIT_FAILURE);
    }

    if (hash_table_set(ht, key2, value2) == 0)
    {
        fprintf(stderr, "Failed to add key2 to hash table\n");
        return (EXIT_FAILURE);
    }

    if (hash_table_set(ht, key3, value3) == 0)
    {
        fprintf(stderr, "Failed to add key3 to hash table\n");
        return (EXIT_FAILURE);
    }

    if (hash_table_set(ht, key2, "31") == 0)
    {
        fprintf(stderr, "Failed to update key2 in hash table\n");
        return (EXIT_FAILURE);
    }

    hash_table_print(ht);

	
	return (EXIT_SUCCESS);
}
