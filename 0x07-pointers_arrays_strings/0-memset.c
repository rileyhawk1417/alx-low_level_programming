#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: char value
 * @b: char value
 * @n: unsigned int value
 * Return: returns pointer to memory area
 * Description: The function behaves like memset
 * Fills the bytes of memory area which is @s,
 * @n is the number of bytes to write. Then @b is
 * is the the character to write
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
int x = n;
for (i = 0; i < x; i++)
{
s[i] = b;
}
return (s);
}
