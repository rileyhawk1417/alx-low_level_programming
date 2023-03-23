#include <stdio.h>

/**
 * main - Entry point
 * Return: prints the infamous FizzBuzz game
 * Description: Program prints the FizzBuzz game
 * using numbers from 1-100
 */
int main(void)
{
int x;
for (x = 1; x < 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", x);
}
}
return (0);
}
