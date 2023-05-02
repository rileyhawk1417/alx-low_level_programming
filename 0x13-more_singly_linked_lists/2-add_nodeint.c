#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: listint_t stuct value
 * @n: int value
 * Return: struct with newly added values
 * Description: Adds nodes to the singly list & returns the new list
 */
listint_t *add_nodeint(listint_t **head, int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
	return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (*head);
}
