#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: unsigned int value
 * Return: returns pointer allocated to memory
 * Description: The function returns @b
 * that has been allocated to memory. If malloc fails
 * return the status code of 98
 */
void *malloc_checked(unsigned int b)
{
void *size = malloc(b);
if (size == NULL)
{
exit(98);
}

return (size);
}
