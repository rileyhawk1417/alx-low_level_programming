#include "lists.h"

/**
 * get_nodeint_at_index - Entry point
 * @head: listint_t (stuct) value
 * @index: unsigned int
 * Return: node value from given index
 * Description: finds the node from the given index
 * then returns the single node as a list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;

while (count < index)
{
if (head == NULL)
	return (NULL);

head = head->next;
count++;
}
return (head);
}
