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
int num;
for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
