#include "main.h"

/**
 * print_numbers - Entry point
 * Return: Simply prints 0-9
 * Description: Program prints 0-9
 */
void print_numbers(void)
{
int num;
for (num = 0; num < 10; num++)
{
_putchar((num) + '0');
}
_putchar('\n');
}
