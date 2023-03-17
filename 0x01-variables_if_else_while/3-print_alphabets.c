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
int a;
char az[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int arrayLength = sizeof(az) / sizeof(az[0]);
for (a = 0; a < arrayLength; a++)
putchar(tolower(az[a]));

for (a = 0; a < arrayLength; a++)
putchar(az[a]);

return (0);
}
