#include "lists.h"

/**
 * free_listint - Entry point
 * @head: listint_t struct value
 * Return: nothing just frees up list
 * Description: Frees up the list within the allocated memory space.
 */
void free_listint(listint_t *head)
{
listint_t *node;
/* NOTE: head->next, it won't work will have leaks */
/* NOTE: Since nodes are dynamically allocated you need */
/* to go through every node to free up the memory */
while (head)
{
node = head->next;
free(head);
head = node;
}
}
