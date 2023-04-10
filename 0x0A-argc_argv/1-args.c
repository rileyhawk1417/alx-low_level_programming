#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int value
 * @argv: char value
 * Description: Print number of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc > 1 && *argv)
{
printf("%d\n", argc - 1);
}
else
{
printf("%d\n", 0);
}

return (0);
}
