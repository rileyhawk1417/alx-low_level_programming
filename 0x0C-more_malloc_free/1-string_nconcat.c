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
int s1Len = strlen(s1);
int s2Len = strlen(s2);
int size = 0, i = 0, z = 0;
int len = n;
char *combined;

combined = malloc((s1Len + s2Len + 1));

if (combined == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
for (i = 0; i < s1Len; i++)
{
combined[i] = s1[i];
}
}

if (s2 != NULL)
{
if (len >= s2Len)
{
size = s1Len + s2Len + 1;
}
else
{
size = len + s1Len + 1;
}
for (; i < size; i++)
{
combined[i] = s2[z];
z++;
}
}

combined[i] = '\0';
return (combined);
}
