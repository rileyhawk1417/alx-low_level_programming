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
int val;
char az[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int arrayLength = sizeof(az) / sizeof(az[0]);
for (val = 0; val < arrayLength; val++)
if ((az[val] != 'Q') && (az[val] != 'E'))
putchar(tolower(az[val]));
putchar('\n');
return (0);
}
