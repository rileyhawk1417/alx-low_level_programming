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
char a;
/* Maybe concat the results? */
for (a = 'a'; a <= 'z'; a++)
putchar(tolower(a));

for (a = 'A'; a <= 'Z'; a++)
putchar(a);

putchar('\n');
return (0);
}
