#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: int value
 * @argv: char value
 * Description: Print name of program
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[0]);
}
return (0);
}
