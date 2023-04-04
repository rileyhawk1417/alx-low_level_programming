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
unsigned int counter = 0;
/* Best to use in-built functions for this */
while (*s && strchr(accept, *s++))
{
counter++;
}
return (counter);
}
