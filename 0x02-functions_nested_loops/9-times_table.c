#include "main.h"
#include <stdlib.h>

/**
 * times_table - Entry point
 * Return: prints x's table to the screen
 * Description: Program prints multiplication
 * table to screen
 */
void times_table(void)
{
int a, b, prod;
for (prod = 0; prod < 10; prod++)
{
for (b = 0; b < 10; b++)
{
a = b * prod;
if ((a / 10) == 0)
{
if (b != 0)
{
_putchar((a) +'0');
_putchar(',');
_putchar(' ');
}
if (b == 9)
{
continue;
}
else
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');

_putchar(',');
_putchar(' ');
/* Do Nothing */
}
}

_putchar('\n');
}
}
}
