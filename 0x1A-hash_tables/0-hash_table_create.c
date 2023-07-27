#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table
 * @size: size of items to store
 * Description: Simply creates a hash table
 * Return: New HashTable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
	return (NULL);

ht->size = size;
ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
return (ht);
}
