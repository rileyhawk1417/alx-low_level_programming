#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Entry point
 * @b: numbers in string format
 * Return: converted binary to unsigned int
 * Description: Takes the binary number then
 * converts it into a decimal(unsigned int) then
 * returns it.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int count = 0, result = 0;
if (b != NULL)
{
while (b[count])
{
if (b[count] == '0' || b[count] == '1')
{
result <<= 1;
result += b[count] - '0';
count++;
}
else
{
return (0);
}
}
}

return (result);
}
