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
int val;
char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (val = 27; val >= 0; val--)
putchar(tolower(az[val]));
return (0);
}
