#include "main.h"

/**
 * print_rev - Entry point
 * @str: Char value
 * Return: returns the reverse output of a string
 * Description: The function returns a string in reverse
 */
void print_rev(char *str)
{
int x = 0;
int len = 0;
while (str[len] != '\0')
{
len++;
}
for (x = 0; x < len; x++)
{
_putchar(str[len - x - 1]);
}
_putchar('\n');
}
