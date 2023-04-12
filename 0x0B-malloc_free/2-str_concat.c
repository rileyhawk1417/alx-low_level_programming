#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Entry point
 * @s1: char value
 * @s2: char value
 * Return: returns combined text
 * Description: The function returns @s1 + @s2
 */
char *str_concat(char *s1, char *s2)
{
int size1 = strlen(s1), size2 = strlen(s2), i = 0;
int z = 0;
char *value;
int size = (size1 + size2) + 1;
value = (char *)malloc(sizeof(char) * size);

if (value == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
for (i = 0; i < size1; i++)
{
value[i] = s1[i];
}
}

if (s2 != NULL)
{
for (i = size1; i < size; i++)
{
value[i] = s2[z];
z++;
}
}
value[size - 1] = '\0';

return (value);
}
