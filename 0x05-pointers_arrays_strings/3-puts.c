#include "main.h"

/*
 * _puts - Entry point
 * @str: Char pointer value
 * Return: returns printed text
 * Description: The function returns a string
 */
void _puts(char *str)
{
int x = 0;
while (str[x] != '\0')
{
_putchar(str[x]);
x++;
}
_putchar('\n');
}
