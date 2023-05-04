#include "main.h"
/**
 * get_bit - Entry point
 * @n: unsigned long int
 * @index: unsigned long int
 * Return: Return value at given index
 * Description: This function takes in a value & index
 * then finds the value found @index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int fail = -1;
/* NOTE: we are avoiding any numbers above 64 */
/* NOTE: when dealing with bases avoid above 64 */
if (index > 64)
{
return (fail);
}
/* NOTE: manually unset & see whats in the next bit */
n >>= index;

if ((n & 1) == 1)
{
return (1);
}

else
{
return (0);
}

return (fail);
}
