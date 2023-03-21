#include "main.h"
#include <stdlib.h>

/**
 * jack_bauer - Entry point
 * Return: prints text to the screen
 * Description: Program prints 24hrs
 * using for loops
 * This one made me sweat x_x
 */
void jack_bauer(void)
{
int a, b;

for (a = 0; a < 24; a++)
{
for (b = 0; b < 60; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
_putchar('\n');
}
}
}
