#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: int value
 * @height: int value
 * Return: returns an array like grid
 * Description: The function returns a grid
 */
int **alloc_grid(int width, int height)
{
int **value;
int prod = width * height;
int i = 0;
if ((width == 0 || height == 0) || (width == -1 || height == -1))
{
return (NULL);
}

value = malloc(sizeof(int *) * prod);

for (i = 0; i < prod; i++)
{
value[i] = malloc(sizeof(int) * prod);
}

return (value);
}
