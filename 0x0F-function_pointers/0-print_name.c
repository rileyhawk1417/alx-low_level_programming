#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Entry point
 * @name: char value
 * @f: void function with char return
 * Return: returns nothing
 * Description: The function runs the function pointer
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
		{ return; }

f(name);
}
