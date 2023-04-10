#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int value
 * @argv: char value
 * Description: add the numbers passed from arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0, sum = 0;

if (argc == 1 || argc == 2)
{
printf("0\n");
return (0);
}

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (0);
}
}
printf("%d\n", sum);
}
return (0);
}
