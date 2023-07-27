#include "hash_tables.h"

/**
 * hash_table_get - Fetch the key/value from the hash table
 *
 * @ht: The hash table to use
 * @key: The key to fetch
 * Description: This simply fetches the value from the
 * hash table using the key given
 * Return: The value of the key given
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *hash_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

index = key_index((const unsigned char *)key, ht->size);

if (index >= ht->size)
	return (NULL);

hash_node = ht->array[index];
/*NOTE: Cycle through the node & keys till they match */
while (hash_node && strcmp(hash_node->key, key) != 0)
	hash_node = hash_node->next;

/*NOTE: Tenary operators if the value is null/not */
return ((hash_node == NULL) ? NULL : hash_node->value);
}
