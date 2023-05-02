#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: list_t stuct value
 * Return: sum of all node values
 * Description: adds all values of singly list
 * and produces the sum
 */
int sum_listint(listint_t *head)
{
int result = 0;
if (head == NULL)
	return (0);

while (head)
{
result += head->n;
head = head->next;
}
return (result);
}
