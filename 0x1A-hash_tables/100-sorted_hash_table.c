#include "hash_tables.h"


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
* shash_table_create - Create a hash table
* @size: The size to be created
* Description: This function simply creates a
* hash table according to specified size
* Return: newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *ht;
unsigned long int counter;

ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
	return (NULL);

ht->size = size;
ht->array = malloc(sizeof(shash_table_t *) * size);
if (ht->array == NULL)
	return (NULL);

for (counter = 0; counter < size; counter++)
	ht->array[counter] = NULL;

ht->shead = NULL;
ht->stail = NULL;

return (ht);
}

/**
* shash_table_set - Set/Update values in the hash table
* @ht: The hash table to use
* @key: The key to set/update
* @value: The value associated with the key
* Description: This function updates the key if present
* If not it will create a new key/value pair
* Return: 0 on success, 1 on failure
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
shash_node_t *hash_node, *tmp_node;
char *node_copy;
unsigned int long index_key;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	return (0);

node_copy = strdup(value);
if (node_copy == NULL)
	return (0);

index_key = key_index((const unsigned char *)key, ht->size);
tmp_node = ht->shead;

while (tmp_node)
{
	if (strcmp(tmp_node->key, key) == 0)
	{
		free(tmp_node->value);
		tmp_node->value = node_copy;
		return (1);
	}
	tmp_node = tmp_node->next;

}

hash_node = malloc(sizeof(shash_node_t));
if (hash_node == NULL)
{
	free(node_copy);
	return (0);
}

hash_node->key = strdup(key);
if (hash_node->key == NULL)
{
	free(node_copy);
	free(hash_node);
	return (0);
}

hash_node->value = node_copy;
hash_node->next = ht->array[index_key];
ht->array[index_key] = hash_node;

if (ht->shead == NULL)
{
	hash_node->sprev = NULL;
	hash_node->snext = NULL;
	ht->shead = hash_node;
	ht->stail = hash_node;
}

else if (strcmp(ht->shead->key, key) > 0)
{
	hash_node->sprev = NULL;
	hash_node->snext = ht->shead;
	ht->shead->sprev = hash_node;
	ht->shead = hash_node;
}

else
{
	tmp_node = ht->shead;
	while (tmp_node->snext != NULL && strcmp(tmp_node->snext->key, key) < 0)
		tmp_node = tmp_node->snext;

	hash_node->sprev = tmp_node;
	hash_node->snext = tmp_node->snext;
	if (tmp_node->snext == NULL)
		ht->stail = hash_node;
	else
		tmp_node->snext->sprev = hash_node;
	tmp_node->snext = hash_node;
}
return (1);
}


/**
* shash_table_get - Fetch values in the hash table
* @ht: The hashtable to use
* @key: The key to fetch
* Description: This fetches the value of the given key
* Return: The value of the key
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
shash_node_t *hash_node;
unsigned long int index_key;

if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

index_key = key_index((const unsigned char *)key, ht->size);
if (index_key >= ht->size)
	return (NULL);

hash_node = ht->shead;
while (hash_node != NULL && strcmp(hash_node->key, key) != 0)
	hash_node = hash_node->next;

return ((hash_node == NULL) ? NULL : hash_node->value);
}


/**
* shash_table_print - Print key/value from the hash table
* @ht: The hashtable to use
* Description: Prints the key/pair values of the hash table
* Return: Nothing
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *hash_node;

if (ht == NULL)
	return;

hash_node = ht->shead;
printf("{");
while (hash_node != NULL)
{
	printf("'%s': '%s'", hash_node->key, hash_node->value);
	hash_node = hash_node->snext;
	if (hash_node != NULL)
		printf(", ");
}
printf("}\n");
}


/**
* shash_table_print_rev - Print key/value from the hash table
* @ht: The hashtable to use
* Description: Prints the key/pair values of the hash table
* in reverse order
* Return: Nothing
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *hash_node;

if (ht == NULL)
	return;

hash_node = ht->stail;
printf("{");
while (hash_node != NULL)
{
	printf("'%s': '%s'", hash_node->key, hash_node->value);
	hash_node = hash_node->sprev;
	if (hash_node != NULL)
		printf(", ");
}
printf("}\n");
}


/**
* shash_table_delete - Deletes the hash table
* @ht: The hashtable to use
* Description: Deletes the key/pair values of the hash table
* Then removes the hash table itself
* Return: Nothing
*/
void shash_table_delete(shash_table_t *ht)
{
shash_table_t *head_node = ht;
shash_node_t *hash_node, *tmp_node;

if (ht == NULL)
	return;

hash_node = ht->shead;
while (hash_node)
{
	tmp_node = hash_node->snext;
	free(hash_node->key);
	free(hash_node->value);
	free(hash_node);
	hash_node = tmp_node;
}

free(head_node->array);
free(head_node);
}


