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
n = rand();
/* your code goes there */
if (n > 0)
 printf("%d is positive\n", n);

if (n == 0)
 printf("%d is zero\n", n);

if (n < 0)
 printf("%d is negative\n", n);
return (0);
}
