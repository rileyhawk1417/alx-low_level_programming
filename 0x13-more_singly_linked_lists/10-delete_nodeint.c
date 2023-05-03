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

if (prevNode == NULL)
	return (-1);

if (index == 0)
{
*head = (*head)->next;
free(prevNode);
return (1);
}

while (count < (index - 1))
{

if (prevNode->next == NULL)
	return (-1);

prevNode = prevNode->next;
count++;
}

if (*head != NULL)
{
target = prevNode->next;
prevNode->next = target->next;
free(target);
return (1);
}

return (-1);
}
