#include "main.h"

/**
 * print_line - Entry point
 * @n: Int value for number
 * Return: Returns a line based on n
 * Description: Program prints based on n input
 */
void print_line(int n)
{
int x;
for (x = 0; x < n; x++)
{
_putchar('_');
}
_putchar('\n');
}
