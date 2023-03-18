#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * Return: Always 0 meaning success
 * Description: Program prints the Alphabet
 * in upper case but also reverses it
 */
int main(void)
{
char val;
for (val = 'Z'; val >= 'A'; val--)
putchar(tolower(val));
putchar('\n');
return (0);
}
