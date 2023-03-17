#include <math.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 meaning success
 * Description: Program prints base16 numbers
 */
int main(void)
{
int num = 0;
char letters = 'a';
for (num; num < 9; num++)
putchar((num % 10) + '0');

for (letters; letters < 'g'; letters++)
putchar(letters);

putchar('\n');

return (0);
}
