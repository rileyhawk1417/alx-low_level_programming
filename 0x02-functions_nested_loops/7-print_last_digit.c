#include "main.h"

/**
* print_last_digit - Entry point
* @n: Input
* Return: return the remainder or modulus of the number
* Description: Program returns modulus of n
* if n has no remainder, -1 from n & try again
*/

int print_last_digit(int n)
{
int num;
if (n < 0)
{
num = -1 * (n % 10); /*-1 if n is less than 0*/
}
else
{
num = n % 10;
}
_putchar((num % 10) + '0');
return (num % 10);
}
