#include "hash_tables.h"


/**
* hash_table_delete - Delete the entire hash table
*
* @ht: The size of the array
* Description: Simply deletes the entire hash table
* along with its contents
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head_node = ht;
hash_node_t *hashNode, *tmp_node;
unsigned long int counter;

for (counter = 0; counter < ht->size; counter++)
{
if (ht->array[counter] != NULL)
	{
	hashNode = ht->array[counter];
		while (hashNode != NULL)
		{
			tmp_node = hashNode->next;
			free(hashNode->key);
			free(hashNode->value);
			free(hashNode);
			hashNode = tmp_node;

		}

	}

}
free(head_node->array);
free(head_node);

}
