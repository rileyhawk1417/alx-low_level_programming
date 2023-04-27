#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - Entry point
 * @h: list_t value
 * Return: size_t value with list length
 * Description: Prints all the elements in the given list
 */
size_t list_len(const list_t *h)
{
unsigned int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
