#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 * @s1: char value
 * @s2: char value
 * @n: unsigned int value
 * Return: returns to new allocated space in memory
 * Description: The function returns @s1
 * pointer location & with @n bytes of @s2 combined with @s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1Len = 0, s2Len = 0;
unsigned int size = 0, i = 0, z = 0, j = 0;
char *combined;

if (s1 != NULL)
while (s1[s1Len] != '\0')
s1Len++;

if (s2 != NULL)
{
while (s2[j] != '\0')
{
if (j < n)
s2Len++;
j++;
}
}

size = (s1Len + s2Len + 1);

combined = malloc(size);

if (combined == NULL)
return (NULL);

for (i = 0; i < s1Len; i++)
combined[i] = s1[i];

for (z = 0; z < s2Len; i++, z++)
combined[i] = s2[z];

combined[i] = '\0';
return (combined);
}
