#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 meaning success
 * Description: Program prints the Alphabet
 * in upper case first then lower case
 */
int main(void)
{
char val;
for (val = 'A'; val <= 'Z'; val++)
if ((val != 'Q') && (val != 'E'))
putchar(tolower(val));
putchar('\n');
return (0);
}
