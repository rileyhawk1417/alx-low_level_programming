#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * leet - Entry point
 * @str: char value
 * Return: returns a leet encoded string
 * Description: The function replaces letters
 * with leet encoding
 */
char *leet(char *str)
{
int x = 0, y = 0, z = 0;
int numberRay[5] = {'4', '3', '0', '7', '1'};
int letterRay[5] = {65, 69, 79, 84, 76};

x = strlen(str);
/*
 * NOTE: Decided to use ASCII key table
 * NOTE: Typing out characters in an array partially worked
 * and missed some letters or put the wrong ones
 * NOTE: To make letters uppercase(+32) or lowercase(-32)
 */
for (y = 0; y < x && str[y] != '\0'; y++)
{
for (z = 0; z < 5; z++)
{
if (str[y] == letterRay[z] || str[y] == letterRay[z] + 32)
{
str[y] = numberRay[z];
}
}
}

return (str);
}
