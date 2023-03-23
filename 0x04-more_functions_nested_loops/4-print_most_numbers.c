#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Entry point
 * Return: Simply prints 0-9 except 2 & 4
 * Description: Program prints 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
int num;
for (num = 0; num < 10; num++)
{
if (num != 2 && num != 4)
{
_putchar((num) + '0');
}
}
_putchar('\n');
}
