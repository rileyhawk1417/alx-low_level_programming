#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Entry point
 * @head: Doubly Linked List
 * @n: int value
 * Return: dlistint_t list & new node
 * Description: Adds new node at end of doubly linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *end;

newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
	return (NULL);

newNode->n = n;

newNode->next = NULL;
end = *head;

if (end != NULL)
{
while (end->next != NULL)
	end = end->next;

end->next = newNode;
}
else
{
*head = newNode;
}
newNode->prev = end;

return (newNode);
}
