#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Entry point
 * @head: Doubly Linked List
 * @n: int value
 * Return: dlistint_t list & new node
 * Description: Adds new node at start of doubly linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *start;

newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
	return (NULL);

newNode->n = n;
newNode->prev = NULL;
start = *head;

if (start != NULL)
{
	while (start->prev != NULL)
		start = start->prev;
}

newNode->next = *head;
if (start != NULL)
	start->prev = newNode;
*head = newNode;

return (newNode);
}
