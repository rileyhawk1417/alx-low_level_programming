#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: unsigned int value
 * @size: unsigned int value
 * Return: returns of newly allocated grid
 * Description: The function allocates @nmemb size of elements
 * and returns pointer to allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *grid;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

grid = calloc(nmemb, size);
/*
 * NOTES: the only difference between malloc & calloc is arguments
 * malloc(nmemb * size)
 * calloc(nmemb, size)
 */
if (grid == NULL)
{
free(grid);
return (NULL);
}

return (grid);
}
