#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint - Entry point
 * @h: Doubly Linked List
 * Return: size_t list & print to screen
 * Description: Prints elements within the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t value = 0;
while (h != NULL)
{
	printf("%u\n", h->n);

	value++;
	h = h->next;
}

return (value);
}
