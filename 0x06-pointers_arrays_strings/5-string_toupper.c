
#include "main.h"
#include <ctype.h>

/**
 * string_toupper- Entry point
 * @str: Char value
 * Return: returns a UPPERCASED string
 * Description: The function returns a string in UPPERCASE
 */
char *string_toupper(char *str)
{
int x = 0, y = 0;
while (str[x] != '\0')
{
x++;
}
while (y < x)
{
if (islower(str[y]))
{
str[y] = toupper(str[y]);
}
y++;
}
return (str);
}
