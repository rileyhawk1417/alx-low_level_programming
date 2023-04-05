#include "main.h"

/**
 * _strlen_recursion - Entry point
 * @s: char value
 * Return: returns a number
 * Description: The function is a recursion
 * that counts the word & returns the length.
 */
int _strlen_recursion(char *s)
{
int x = 0;
if (*s == '\0')
{
return (0);
}
else
{
x = 1 + _strlen_recursion(++s);
}
return (x);
}
