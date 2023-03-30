#include "main.h"
#include <ctype.h>

/**
 * cap_string - Entry point
 * @str: char value
 * Return: returns a very punctuated string ;)
 * Description: The function looks for any punctuations
 * then adds an uppercase to the letter
 */
char *cap_string(char *str)
{
int x = 0, y = 0;

while (str[x] != '\0')
{
x++;
}
/*
 * NOTE: Decided to use ASCII key table
 * NOTE: It was much easier than typing the characters
 * because using the actual character didnt help in some cases
 * NOTE: These are the characters, might be better to use regex
 * " "\t\n,;.!?"(){}
 */
while (str[y] != '\0')
{
if ((str[y] == 32) || (str[y] == '\t') || (str[y] == '\n') ||
(str[y] == 44) || (str[y] == 59) || (str[y] == 33) || (str[y] == 63) ||
(str[y] == 34) || (str[y] == 40) || (str[y] == 41) || (str[y] == 123) ||
(str[y] == 125) || (str[y] == 46)) {
str[y + 1] = toupper(str[y + 1]);
}
y++;
}

return (str);
}
