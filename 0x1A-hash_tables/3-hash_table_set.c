#include "hash_tables.h"

/**
 * hash_table_set - Set/Update hash table values
 *
 * @ht: The hashtable to use
 * @key: The key for hash table value
 * @value: The value to use with @key
 * Description: This function simply sets hash table values
 * even updates them
 * Return: 0 on success, 1 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_value;
char *value_dup;
unsigned long int index, counter;
/*NOTE: Necessary to add checks for the table, key * value*/
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

value_dup = strdup(value);
if (value_dup == NULL)
	return (0);

index = key_index((const unsigned char *)key, ht->size);
for (counter = index; ht->array[counter]; counter++)
{
	if (strcmp(ht->array[counter]->key, key) == 0)
	{
		free(ht->array[counter]->value);
		ht->array[counter]->value = value_dup;
		return (1);
	}
}

new_value = malloc(sizeof(hash_node_t));
if (new_value == NULL)
{
free(value_dup);
return (0);
}

new_value->key = strdup(key);
if (new_value->key == NULL)
{
free(new_value);
return (0);
}

new_value->value = value_dup;
new_value->next = ht->array[index];
ht->array[index] = new_value;
return (1);
}

