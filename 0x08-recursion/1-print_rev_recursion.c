#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Entry point
 * @s: char value
 * Return: returns string in reverse
 * Description: The function is a recursion
 * that returns a string in reverse.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
/* Wierdly enough this works fine while reversing */
/* Not while incrementing though... */

_print_rev_recursion(s + 1);

_putchar(*s);
}
}
