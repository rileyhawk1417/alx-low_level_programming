#include "lists.h"

/**
 * add_nodeint_end - Entry point
 * @head: listint_t stuct value
 * @n: int value
 * Return: struct with newly added values
 * Description: Adds nodes to the last node of singly
 * list & returns the new list
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
listint_t *prevNode, *newNode;
newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
	return (NULL);

newNode->n = n;
newNode->next = NULL;
prevNode = *head;

if (prevNode == NULL)
	*head = newNode;
else
{
while (prevNode->next != NULL)
	prevNode = prevNode->next;

prevNode->next = newNode;
}
return (*head);
}
