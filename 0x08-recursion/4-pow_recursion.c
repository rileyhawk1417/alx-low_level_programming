#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: int value
 * @y: int value
 * Return: returns an int
 * Description: The function is a recursion
 * that returns the power of x
 */
int _pow_recursion(int x, int y)
{
/* Need to use 3 checks just to make sure we arent missing anything */
/*
 * Ended up with a variable return (x * func) does not work
 * it gets seen as a math equation
 */
int result;
if (y < 0)
{
result = -1;
}
else if (y == 0)
{
result = 1;
}
else
{
result = x * _pow_recursion(x, y - 1);
}
return (result);
}
