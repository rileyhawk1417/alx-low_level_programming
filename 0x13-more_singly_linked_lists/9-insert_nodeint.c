#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * @head: listint_t struct value
 * @idx: unsigned int
 * @n: int value
 * Return: return list with newly added node
 * Description: Add a new node in the list at the given index
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *prevNode, *nextNode;
nextNode = malloc(sizeof(listint_t));
prevNode = *head;
if (nextNode == NULL)
	return (0);

nextNode->n = n;
if (idx == 0)
{
nextNode->n = n;
nextNode->next = *head;
*head = nextNode;
return (nextNode);
}

while (count < (idx - 1))
{
if (prevNode == NULL || prevNode->next == NULL)
	return (NULL);

prevNode = prevNode->next;
count++;
}

nextNode->next = prevNode->next;
prevNode->next = nextNode;

return (nextNode);
}
