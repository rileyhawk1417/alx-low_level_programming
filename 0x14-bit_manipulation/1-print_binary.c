#include "main.h"

/**
 * print_binary - Entry point
 * @n: numbers to print in binary
 * Return: nothing
 * Description: Takes the decimal number then
 * converts it into a binary(long int)
 * This is a recursive function BTW
 */
void print_binary(unsigned long int n)
{
if (!n)
{
return;
}

if (n > 1)
{
print_binary(n >> 1);
}
_putchar((n & 1) + '0');
}
