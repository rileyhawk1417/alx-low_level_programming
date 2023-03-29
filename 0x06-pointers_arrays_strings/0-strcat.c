#include "main.h"
#include <string.h>
/**
 * _strcat - Entry point
 * @dest: char value
 * @src: char value
 * Return: returns a concatenated string
 * Description: The function combines a string
 */
char *_strcat(char *dest, char *src)
{
int x = 0;
while (dest[x] != '\0')
{
x++;
}
stpcpy(dest + x, src);
return (dest);
}
