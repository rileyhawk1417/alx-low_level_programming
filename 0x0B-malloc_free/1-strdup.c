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
int size = 0, i = 0;
char *value;

if (str == NULL)
{
return (NULL);
}

while (str[i] != '\0')
{
size++;

if (str[i] == '\0')
{
break;
}
i++;
}

value = ((char *)malloc(sizeof(char) * size) + 1);
if (value == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
value[i] = str[i];
}

return (value);
}
