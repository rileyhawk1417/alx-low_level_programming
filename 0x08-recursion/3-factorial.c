#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * factorial - Entry point
 * @n: int value
 * Return: returns an int
 * Description: The function is a recursion
 * that returns a int factor
 */
int factorial(int n)
{
/* Need to use 3 checks just to make sure we arent missing anything */
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
