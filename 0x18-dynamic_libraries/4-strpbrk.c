#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry point
 * @s: char value
 * @accept: char value
 * Return: returns pointer of bytes that match @accept
 * Description: The function behaves like strpbrk
 * returns the first occurence of that matches bytes of @accept
 * from @s
 */
char *_strpbrk(char *s, char *accept)
{
char *extraFilter;
while (*s != '\0')
{
extraFilter = accept;
while (*extraFilter != '\0')
{
if (*s == *extraFilter)
{
return (s);
}
extraFilter++;
}
s++;
}
return (NULL);
}
