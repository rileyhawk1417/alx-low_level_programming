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
int value = 0, a = 0, b = 0;
char *operator;

/* Just have to use argc somewhere */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
operator = argv[2];

/* Test case for get_op_func & first input */
if (get_op_func(operator) == NULL || operator[1] != '\0')
{
printf("Error\n");
exit(99);
}

/* Test case for operator & last input number need to use pointers */
if ((*operator == '/' && b == '\0') || (*operator == '%' && b == 0))
{
printf("Error\n");
exit(100);
}

value = get_op_func(operator)(a, b);

printf("%d\n", value);
return (0);
}
