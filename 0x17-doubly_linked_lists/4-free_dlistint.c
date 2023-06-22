#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - Entry point
 * @head: Doubly Linked List
 * Return: nothing
 * Description: Free up the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *node = head;

while (node->next != NULL)
{
	node = node->next;
	free(node->prev);
}
free(node);
}
