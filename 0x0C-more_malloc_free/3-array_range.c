#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: int value
 * @max: int value
 * Return: returns an array within min - max
 * Description: The function returns values within
 * min - max range.
 */
int *array_range(int min, int max)
{
int *ray;
int i = 0, x = 0;
int memalloc = 0;

/*
 * NOTE:
 * Necessary to avoid error of sysmalloc.
 * Check file malloc.c:2593
 */
memalloc = max - min + 1;
ray = malloc(sizeof(int) * memalloc);
if (ray == NULL)
{
return (NULL);
}

if (min > max)
{
free(ray);
return (NULL);
}

for (i = min; i <= max; i++)
{
ray[x] = i;
x++;
}

return (ray);
}
