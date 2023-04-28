#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Entry point
 * @h: list_t value
 * Return: size_t value & prints to the screen
 * Description: Prints all the elements in the given list
 */
size_t print_list(const list_t *h)
{
size_t x = 0;
while (h != NULL)
{
if (h->str == NULL)
	printf("[0] (nil)\n");
else 
{
printf("[%u] %s\n", h->len, h->str);
}

x++;
h = h->next;
}
return (x);
}
