#include "hash_tables.h"

/**
 * key_index - Fetch the key
 *
 * @key: The key to identify
 * @size: the size of the array
 * Description: Fetches the index using the key
 * Return: hash table key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
