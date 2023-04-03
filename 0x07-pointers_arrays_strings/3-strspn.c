#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * @s: char value
 * @accept: char value
 * Return: returns number of bytes of initial segment
 * Description: The function behaves like strspn
 * returns bytes of initial segment of @s which only has
 * bytes from @accept
 * is the limit
 */
unsigned int _strspn(char *s, char *accept)
{
int stringA = 0, stringB = 0, x = 0, y = 0, counter = 0;
stringA = strlen(s);
stringB = strlen(accept);
for (x = 0; x < stringA; x++)
{
for (y = 0; y < stringB; y++)
{
if (s[y] == accept[x])
{
counter++;
}
}
}
return (counter + 1);
}
