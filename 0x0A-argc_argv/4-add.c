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
char *tmp = 0;

if (argc == 1 || argc == 2)
{
printf("0\n");
return (0);
}

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
/* strtol works better than atoi */
sum += strtol(argv[i], &tmp, 10);
if (*tmp != 0)
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
}
return (0);
}
