#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Entry point
 * @head: Doubly Linked List
 * @index: id of target node
 * Return: 0 on success, 1 on fail
 * Description: Get a node value from the list with index
 * then add a new value after
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *targetNode = *head;
dlistint_t *tmpNode;
unsigned int count = 0;

if (targetNode != NULL)
	while (targetNode->prev != NULL)
	{
		targetNode = targetNode->prev;
	}


while (targetNode != NULL)
{
if (count == index)
{

if (count == 0)
{
*head = targetNode->next;
if (*head != NULL)
	(*head)->prev = NULL;
}
else
{
tmpNode->next = targetNode->next;
if (targetNode->next != NULL)
	targetNode->next->prev = tmpNode;
}

free(targetNode);
return (1);
}

tmpNode = targetNode;
targetNode = targetNode->next;
count++;
}

return (-1);
}
