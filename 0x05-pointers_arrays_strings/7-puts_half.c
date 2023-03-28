#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 * @str: Char value
 * Return: returns half of the string
 * Description: The function returns half of the string
 */
void puts_half(char *str)
{
int x = 0, y = 0, z = 0;

if (strcmp("", str) != 0)
{
while (str[x] != '\0')
{
x++;
}
z = (x + 1) / 2;
for (y = z; y < x; y++)
{
_putchar(str[y]);
}
}
_putchar('\n');
}
