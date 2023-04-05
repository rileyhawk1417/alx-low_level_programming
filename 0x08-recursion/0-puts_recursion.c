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
int x = 0, length = strlen(s);

_putchar(s[x]);
x++;
if (x > length)
{
return;
}

/* If you wonder why there's a 1 remove it & see what happens */
_puts_recursion(s + 1);

/*
 * By the way this other format also works
 * _putchar(*s);
 * _puts_recursion(s+1);
 * Its all about the execution stack really
 */
}
