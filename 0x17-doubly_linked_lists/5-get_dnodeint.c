#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_dnodeint_at_index - Entry point
 * @head: Doubly Linked List
 * @index: unsigned int
 * Return: doubly linked list & value
 * Description: Get a node value from the list with index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
	return (NULL);

while (head->prev != NULL)
	head = head->prev;

while (head != NULL)
{
if (count == index)
	break;


head = head->next;
count++;
}
return (head);
}
