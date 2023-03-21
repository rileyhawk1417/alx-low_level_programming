#include "main.h"

/**
* print_sign - Entry point
* @n: Input
* Return: + if n > 0, return 0 if n == 0
* return - if n < 0
* Description: Program checks if n is
* <, > or == 0 then returns the signs
*/
int print_sign(int n)
{
int res;

if (n > 0)
{
_putchar('+');
res = 1;
}

if (n < 0)
{
_putchar('-');
res = -1;
}

if (n == 0)
{
_putchar('0');
res = 0;
}
return (res);
}
