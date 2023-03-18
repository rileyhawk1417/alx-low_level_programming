#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
* main - Entry point
* Return: Always 0 meaning success
* Description: Program prints the Alphabet
* in lower case
*/
int main(void)
{
char a;
for (a = 'A'; a <= 'Z'; a++)
putchar(tolower(a));
putchar('\n');
return (0);
}
