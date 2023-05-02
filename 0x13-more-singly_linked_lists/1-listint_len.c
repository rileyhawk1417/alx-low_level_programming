#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Entry point
 * @h: listint_t value
 * Return: size_t value with list length
 * Description: Prints all the elements in the given list
 */
size_t listint_len(const listint_t *h)
{
unsigned int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
