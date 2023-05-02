#include "lists.h"

/**
 * free_listint2 - Entry point
 * @head: listint_t (struct) value
 * Return: nothing just frees up list
 * Description: Frees up the list within the allocated memory space.
 * then makes the head NULL
 */
void free_listint2(listint_t **head)
{
listint_t *node;
/* NOTE: head->next, it won't work will have leaks */
/* NOTE: Since nodes are dynamically allocated you need */
/* to go through every node to free up the memory */
/* NOTE: (*head) can access props for it */
if (head == NULL)
	return;

while (*head)
{
node = (*head)->next;
free(*head);
*head = node;
}
head = NULL;
}
