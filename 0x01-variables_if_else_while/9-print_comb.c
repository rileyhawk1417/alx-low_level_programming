#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 means success
 * Description: Program prints 0-9
 * also prints a ',' after every
 * number
 */

int main(void)
{
int num = 0;

for (num = 0; num < 10; num++)
{
if (num < 9)
{
putchar((num % 10) + '0');
putchar(',');
}
else
{
putchar((num % 10) + '0');
}
}
putchar('\n');

return (0);
}
