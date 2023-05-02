#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Entry point
 * @h: list_t value
 * Return: size_t value & prints to the screen
 * Description: Prints all the elements in the given list
 */
size_t print_listint(const listint_t *h)
{
size_t x = 0;
while (h != NULL)
{
if (h == NULL)
	printf("(nil)\n");
else
	printf("%d\n", h->n);

x++;
h = h->next;
}
return (x);
}
