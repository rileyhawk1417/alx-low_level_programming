#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - Entry point
 * @head: list_t (struct) value
 * Return: nothing just frees up list
 * Description: Frees up the list within the allocated memory space.
 */
void free_list(list_t *head)
{
list_t *node;
/* NOTE: head->next, it won't work will have leaks */
/* NOTE: Since nodes are dynamically allocated you need */
/* to go through every node to free up the memory */
while (head)
{
node = head->next;
free(head->str);
free(head);
head = node;
}
}
