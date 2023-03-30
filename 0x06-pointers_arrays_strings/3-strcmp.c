#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * @s1: char value
 * @s2: char value
 * Return: returns a concatenated string
 * Description: The function copies the string
 * from one array into another
 */
int _strcmp(char *s1, char *s2)
{
int x = 0, res = 0;
/*
 * String comparison works better in while loop
 * When using for loop it fails to print last value
 * so comparing s1[x] != '\0' with if statement doesnt do well
 */
while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
{
x++;
}

res = s1[x] - s2[x];
return (res);
}
