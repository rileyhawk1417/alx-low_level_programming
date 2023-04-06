#include "main.h"
#include <math.h>
#include <stdio.h>

int theprimeagen(int target, int seed);

/**
 * is_prime_number - Entry point
 * @n: int value
 * Return: returns an int
 * Description: The function is a recursio1r
 * returns 1 if a prime number, if not returns 0
 * Main Function
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (theprimeagen(n, n / 2));
}

/**
 * theprimeagen - Entry point
 * @target: int value
 * @seed: int value
 * Return: returns an int
 * Description: The function is a recursion
 * returns 1 if a prime number, if not returns 0
 * Helper function
 */
int theprimeagen(int target, int seed)
{
if (seed == 2)
{
return (1);
}
if (target % seed == 0 && seed < target)
{
return (0);
}

return (theprimeagen(target, seed - 1));
}
