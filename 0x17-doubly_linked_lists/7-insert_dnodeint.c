#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Entry point
 * @h: Doubly Linked List
 * @idx: id of target node
 * @n: value to insert
 * Return: doubly linked list & value
 * Description: Get a node value from the list with index
 * then add a new value after
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *head;
dlistint_t *newNode;
newNode = NULL;
if (idx == 0)
	newNode = add_dnodeint(h, n);
else
{
head = *h;
count = 1;
if (head != NULL)
	while (head->prev != NULL)
	{
		head = head->prev;
	}
while (head != NULL)
{
if (count == idx)
{
if (head->next == NULL)/*NOTE: Add after the current node */
	newNode = add_dnodeint_end(h, n);
else
{
newNode = malloc(sizeof(dlistint_t));
if (newNode != NULL)
{
newNode->n = n;
newNode->next = head->next;
newNode->prev = head;
head->next->prev = newNode;
head->next = newNode;
}
}
break;
}
head = head->next;
count++;
}
}
return (newNode);
}
