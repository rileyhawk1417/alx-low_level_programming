#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Int value for number
 * Return: Returns a \ character on loop
 * Description: Program prints \ character based on loop
 * from @n variable. The space is to make it more visible
 */
void print_diagonal(int n)
{
int x, i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
for (i = 0; i < x; i++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
