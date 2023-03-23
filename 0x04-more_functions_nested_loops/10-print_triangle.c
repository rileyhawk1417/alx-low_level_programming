#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Int value for number
 * Return: Returns a # character on loop
 * Description: Program prints # character based on loop
 * from @n variable.
 */
void print_triangle(int size)
{
int x, i;
if (size > 0)
{
for (x = 0; x < size; x++)
{
for (i = size - 1; i >= 0; i--)
{
if (i <= x)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
