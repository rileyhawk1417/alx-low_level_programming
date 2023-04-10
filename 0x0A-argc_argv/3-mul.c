#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int value
 * @argv: char value
 * Description: print the product of given arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int prod = 0, a = 0, b = 0;

if (argc == 1 || argc == 2)
{
printf("Error\n");
return (0);
}

if (argc > 1)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
prod = (a *b);
printf("%d\n", prod);
}
return (0);
}
