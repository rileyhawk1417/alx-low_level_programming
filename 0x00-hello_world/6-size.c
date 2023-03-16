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
printf("The size of a char: %ld byte(s) \n", sizeof(char));
printf("The size of an int: %ld byte(s) \n", sizeof(int));
printf("The size of a long int: %ld byte(s) \n", sizeof(int));
printf("The size of a long long int: %ld byte(s) \n", sizeof(int) + sizeof(int));
printf("The size of a float: %ld byte(s) \n", sizeof(float));
return (0);
}
