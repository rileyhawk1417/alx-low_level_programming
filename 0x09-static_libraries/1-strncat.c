#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strncat - Entry point
 * @dest: char value
 * @src: char value
 * @n: int value
 * Return: returns a concatenated string
 * Description: The function copies the string
 * from one array into another
 */
char *_strncat(char *dest, char *src, int n)
{
int x = 0, y = 0;
while (dest[x] != '\0')
{
x++;
}

for (y = 0; y < n && src[y] != '\0'; y++)
{
/* Copy src array into dest [x(string total) + y] */
dest[x + y] = src[y];
}
dest[x + y] = '\0';
return (dest);
}
