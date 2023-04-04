
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
char *query = &c;
/* Tried Setting this to '\0', still getting 'nil' */
/* Similar to finding a needle in a haystack function */
if (!*query)
{
return (query);
}
else
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
}
return (NULL);
}
