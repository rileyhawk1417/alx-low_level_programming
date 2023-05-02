#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: listint_t struct type
 * @index: unsigned int
 * Return: 0 if passed, -1 if code fails
 * Description: Deletes a selected node within the linked list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;

listint_t *target, *prevNode;
prevNode = *head;

while (count < index)
{
if (head == NULL)
	return (-1);

prevNode = prevNode->next;
count++;
}
if (*head == NULL)
	return (-1);

if (head != NULL)
{
target = *head;
prevNode->n = (*head)->n;
prevNode = (*head)->next;
*head = prevNode;
free(target);
return (0);
}

return (-1);
}
