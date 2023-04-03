#include "main.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: char value
 * @b: char value
 * @n: unsigned int value
 * Return: returns pointer to memory area
 * Description: The function behaves like memset
 * Fills the bytes of memory area which is s,
 * b is the number of bytes to write. Then is
 * is the limit
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (n > i)
{
*s = b;
s++;
n--;
}
return (s);
}
