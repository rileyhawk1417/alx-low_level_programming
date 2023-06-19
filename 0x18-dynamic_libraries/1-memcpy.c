#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: char value
 * @src: char value
 * @n: unsigned int value
 * Return: returns pointer to pointer dest
 * Description: The function behaves like memcpy
 * copies n bytes from @src to @dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
