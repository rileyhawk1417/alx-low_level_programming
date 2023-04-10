#include "main.h"
#include <ctype.h>

/**
 * _atoi - Entry point
 * @s: char value
 * Return: returns the digit within a string
 * Description: The function a string with an int then
 * returns the integer found in the string.
 * Similar function to atoi but does not error out :)
 */
int _atoi(char *s)
{
int x = 0;
unsigned int num = 0;
char *operator = s;
int starSign = 1;

/*
 * NOTE: While loops just work better with strings
 * Especially for the terminating string
 */
while (operator[x] != '\0' && (operator[x] < '0' || operator[x] > '9'))
{
if (operator[x] == '-')
{
starSign *= -1;
}
operator++;
}

/*
 * NOTE: Does not work well causes integer overflow
 * When not using if condition
*/
if (*operator != '\0')
{

/*
 * NOTE: Used a do while loop for this.
 * A for loop just gave me an integer overflow :(
 * Placing a while loop within another while just did the same
 */
do {
num = num * 10 + (*operator - '0');
operator++;
} while (*operator >= '0' && *operator <= '9');
}

num = (num *starSign);
return (num);
}
