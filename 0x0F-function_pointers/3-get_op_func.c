#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Entry point
 * @s: char value
 * Return: returns a function pointer from the struct
 * Description: The function runs through the loop checking
 * if @s matches with one of the struct values.
 * Then returns one of the function pointers from the struct.
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

/*
 * NOTE: If current value != NULL &&
 * If current value != NULL increment i
 * NOTE: If we don't wrap *(ops[i].op) then compare it as a pointer.
 * It won't end well, since argv by itself is a pointer
 * (reference to the address)
 */

while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}
return (ops[i].f);
}
