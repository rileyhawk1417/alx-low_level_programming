#include "main.h"
/**
 * flip_bits - Entry point
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: Return value flipped bit
 * Description: This function takes in a value & bit
 * then flips the value using the given bit.
 */
int flip_bits(unsigned long int n, unsigned int m)
{
int count = 0, res = 0;
unsigned long int value;
/*NOTE: from my understanding, `^` will add the missing bit */
unsigned long int addedValue = n ^ m;

while (count < 64)
{
value = addedValue >> count;
if (value & 1)
{
res++;
}
count++;
}
return (res);
}
