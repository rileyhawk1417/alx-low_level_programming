#include "main.h"

int _square_finder(int seed, int magic);

/**
 * _sqrt_recursion - Entry point
 * @n: int value
 * Return: returns an int
 * Description: The function is a recursion
 * that returns the square root of n
 */
int _sqrt_recursion(int n)
{
/*
 * look up babylonian recursion in c
 * The helper function is there to help us out.
 */
return (_square_finder(n, 1));
}

/**
 * _square_finder - Entry point
 * @seed: int value
 * @magic: int value
 * Return: returns an int
 * Description: The function is a recursion
 * that returns the square root of the @seed given
 * @magic is our initial number that we start with
 */
int _square_finder(int seed, int magic)
{

int result = 1;
if (seed < 0)
{
result = -1;
}
else if (magic * magic == seed)
{
result = magic;
}
else if (magic * magic > seed)
{
result = -1;
}
else
{
result = _square_finder(seed, magic + 1);
}
return (result);
}
