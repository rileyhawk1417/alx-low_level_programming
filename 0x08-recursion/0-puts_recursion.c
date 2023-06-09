#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * _puts_recursion - Entry point
 * @s: char value
 * Return: returns string
 * Description: The function is a recursion
 * that returns a string.
 */
void _puts_recursion(char *s)
{
int x = 0;

if (s[x] != '\0')
{
_putchar(s[x]);
x++;
/* If you wonder why there's a 1 remove it & see what happens */
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}


/*
 * By the way this other format also works
 * _putchar(*s);
 * _puts_recursion(s+1);
 * Its all about the execution stack really
 */
}
