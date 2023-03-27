#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * _strcpy - Entry point
 * @dest: Char value
 * @src: Char value
 * Return: returns a copy of the string
 * Description: The function returns a string in reverse
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
while (src[len] != '\0')
{
len++;
}
stpcpy(dest, src);
return dest;
}
