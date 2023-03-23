#include "main.h"

/**
 * more_numbers - Entry point
 * Return: Simply prints 0-14
 * Description: Program prints 0-14
 * The process is repeated 10 times
 */
void more_numbers(void)
{
int numA, numB;
for (numA = 0; numA < 10; numA++)
{
for (numB = 0; numB <= 14; numB++)
{
if (numB < 10)
{
_putchar((numB) + '0');
}
else if (numB > 9)
{
_putchar((1) + '0');
_putchar((numB % 10) + '0');
}
}
_putchar('\n');
}
}
