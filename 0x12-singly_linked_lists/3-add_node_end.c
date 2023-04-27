#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Entry point
 * @str: char*(string) value
 * @head: list_t (stuct) value
 * Return: struct with newly added values
 * Description: Adds nodes to the last node of singly
 * list & returns the new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *prevNode, *newNode;
size_t num = 0;
newNode = malloc(sizeof(list_t));

if (newNode == NULL)
	return (NULL);

newNode->str = strdup(str);

/* Count number of characters in there */
while (str[num] != '\0')
	num++;

newNode->len = num;
newNode->next = NULL;
prevNode = *head;

if (prevNode == NULL)
	*head = newNode;
else
{
	while (prevNode->next != NULL)
		prevNode = prevNode->next;
	prevNode->next = newNode;
}
return (*head);
}
