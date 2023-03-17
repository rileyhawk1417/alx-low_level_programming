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
int arrayLength = sizeof(az) / sizeof(az[0]) + 1;
for (val = arrayLength; val >= 0; val--)
putchar(tolower(az[val]));

putchar('\n');
return (0);
}
