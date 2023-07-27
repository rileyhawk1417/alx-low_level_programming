#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table contents
 *
 * @ht: The hash table to print
 * Description: This simply prints out a hash table
 * all key/value pairs.
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *hash_node;
unsigned long int counter;
unsigned char separator = 0;

if (ht == NULL)
	return;

printf("{");
for (counter = 0; counter < ht->size; counter++)
{
	if (ht->array[counter] != NULL)
	{
		if (separator == 1)
			printf(", ");

		hash_node = ht->array[counter];
		while (hash_node != NULL)
		{
			printf("'%s': '%s'", hash_node->key, hash_node->value);
			hash_node = hash_node->next;
			if (hash_node != NULL)
				printf(", ");
		}
		separator = 1;
	}
}
printf("}\n");
}
