#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/**
 * main - Entry point
 * Return: Always 0 meaning success
 * Description: Program simply returns a number
 * with if/else statements
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n);

if (n % 10 == 0)
printf("Last digit of %d is %d and is %d\n", n, 0, 0);

if (n % 10 < 6 && n % 10 != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);

return (0);
}
