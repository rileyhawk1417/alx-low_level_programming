#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Entry point
 * @str: char value
 * Return: returns printed text
 * Description: The function returns @str
 * duplicates string & returns a copy
 */
char *_strdup(char *str)
{
int size = strlen(str), i = 0;
char *value;

if (str == NULL)
{
return (NULL);
}

value = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
{
value[i] = str[i];
}

return (value);
}
