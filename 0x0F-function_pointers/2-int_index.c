#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Entry point
 * @array: int value
 * @size: int value
 * @cmp: int function pointer
 * Return: returns nothing
 * Description: The function runs the function pointer
 * with the provided arguments. Which compares numbers
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i = 0;

if (array  == NULL || cmp == NULL)
		{ return (-1); }

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
