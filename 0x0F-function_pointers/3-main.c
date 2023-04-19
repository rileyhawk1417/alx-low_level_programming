#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int value
 * @argv: char value
 * Description: Entry point for calculator
 * Return: result of calculator
 */
int main(int argc, char *argv[])
{
int value = 0;
/* TODO: Add null test cases when checker fails */
if (argc > 1)
{
value = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
}

printf("%d\n", value);
return (0);
}
