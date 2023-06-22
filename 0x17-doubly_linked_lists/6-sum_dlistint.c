#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - Entry point
 * @head: Doubly Linked List
 * Return: sum of linked list values
 * Description: Calculate all the values in linked list
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int result = 0;
int counter = 0;
if (head == NULL)
	return (0);

while (head != NULL)
{
	result += head->n;
	counter++;
	head = head->next;
}
return (result);
}
