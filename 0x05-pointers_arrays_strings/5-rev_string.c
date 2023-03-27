#include "main.h"

/*
 * rev_starting - Entry point
 * @s: Char value
 * Return: returns a reversed string
 * Description: The function returns a string in reverse
 */
void rev_string(char *s)
{
int len = 0;
char *start = s;
char *end;
char tmp;
while (start[len] != '\0')
{
len++;
}
end = s + len - 1;
while (end > start)
{
tmp = *end;
*end-- = *start;
*start++ = tmp;
}
}
