#include "main.h"

/**
 * print_square - Entry point
 * @size: Int value for number
 * Return: Returns a # character on loop
 * Description: Program prints # character based on loop
 * from @n variable.
 */
void print_square(int size)
{
int x, y;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
