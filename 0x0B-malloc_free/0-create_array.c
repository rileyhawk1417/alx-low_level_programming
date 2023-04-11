#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_array - Entry point
 * @size: unsigned int value
 * @c: char value
 * Return: returns printed text
 * Description: The function returns @c
 * becomes a hexadecimal ASCII character
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i = 0;
if (size == 0)
{
return (NULL);
}

str = (char *)malloc(sizeof(char) * size);
/* NOTE: If malloc fails return null */
if (!str)
{
return (NULL);
}
if (c != ' ')
{

/*
 * NOTE: for changing to ASCII hexadecimal
 * (char*) malloc(sizeof(char)*size); works
 * Though looking into sprintf() is an option
 */
for (i = 0; i < size; i++)
{
str[i] = c;
}
}

return (str);
}
