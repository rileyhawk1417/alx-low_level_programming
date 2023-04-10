#include "main.h"
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: char value
 * @src: char value
 * @n: int value
 * Return: returns a concatenated string
 * Description: The function copies the string
 * from one array into another
 */
char *_strncpy(char *dest, char *src, int n)
{
stpncpy(dest, src, n);
return (dest);
}
