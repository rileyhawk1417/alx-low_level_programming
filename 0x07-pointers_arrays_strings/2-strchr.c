
#include "main.h"
#include <string.h>
/**
 * _strchr - Entry point
 * @s: char value
 * @c: char value
 * Return: returns pointer of character occurence
 * Description: The function behaves like strchr
 * returns the first occurence of @s char in @s
 * By default returns NULL if nothing matches
 */
char *_strchr(char *s, char c)
{
int i = 0;
char *filtered;
while (s[i] != '\0')
{
filtered = s;
if (filtered[i] == c)
{
return (filtered);
}
s++;
}
return (NULL);
}
