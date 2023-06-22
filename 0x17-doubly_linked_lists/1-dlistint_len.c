#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len - Entry point
 * @h: Doubly Linked List
 * Return: size_t length & print to screen
 * Description: Prints number of list items in doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t value = 0;
while (h != NULL)
{
	value++;
	h = h->next;
}

return (value);
}
