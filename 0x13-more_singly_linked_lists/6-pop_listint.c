#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: listint_t stuct value
 * Return: value of head node(first node)
 * Description: deletes the first node(head) then
 * returns the node value that was deleted
 */
int pop_listint(listint_t **head)
{
listint_t *target;
int value = 0;

if (*head != NULL)
{
target = *head;
value = (*head)->n;
*head = (*head)->next;
free(target);
return (value);
}
return (value);
}
