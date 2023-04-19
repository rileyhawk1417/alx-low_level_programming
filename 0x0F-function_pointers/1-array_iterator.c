#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Entry point
 * @array: int value
 * @size: size_t value/int value
 * @action: void function pointer
 * Return: returns nothing
 * Description: The function runs the function pointer
 * with the provided arguments.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
int len = size;
if (action != NULL && array != NULL)
{

for (i = 0; i < len; i++)
{
action(array[i]);
}
}
}
