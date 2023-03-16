#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 meaning success
 * Description: Program returns data types
 * found on the host computer
 */
int main(void)
{
long int c;
long long int d;
float e;
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(e));
return (0);
}
