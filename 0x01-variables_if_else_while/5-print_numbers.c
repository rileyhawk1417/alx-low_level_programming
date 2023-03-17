#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 meaning success
 * Description: Program prints base10 numbers
 * from 0 - 9 printf()
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
printf("%d", num);
printf("\n");
return (0);
}
