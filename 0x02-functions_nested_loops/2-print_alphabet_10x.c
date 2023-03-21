#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description: Program prints the alphabet
* x10 on the screen
*/
void print_alphabet_x10(void)
{
char letter;
int num;
for (num = 0; num <= 10; num++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
